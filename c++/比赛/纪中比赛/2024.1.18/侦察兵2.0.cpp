#include <bits/stdc++.h>
using namespace std;
int  n, t;
int  a[1002][1002],fx[1002][1002],fy[1002][1002];
int  ans1,ans2;
int  sx, sy;
int main() {
	freopen("scout.in", "r", stdin);
	freopen("scout.out", "w", stdout);
	cin >> n >> t;
	for (int  i = 1; i <= n; i++)
		for (int  j = 1; j <= n; j++)
			cin >> a[i][j];
	for(int  i=2; i<=n; i++) {
		for(int  j=2; j<=n; j++) {
			fx[i][j]=fx[i][j-1]+fx[i-1][j]-fx[i-1][j-1]+a[i-1][j-1];
		}
	}
	for(int  i=n-1; i>=1; i--) {
		for(int  j=n-1; j>=1; j--) {
			fy[i][j]=fy[i][j+1]+fy[i+1][j]-fy[i+1][j+1]+a[i+1][j+1];
		}
	}
	for(int i=1; i<=t; ++i) {
		cin >> sx >> sy;
		cout << fx[sx][sy]+fy[sx][sy]<<endl;
	}
	return 0;
}
