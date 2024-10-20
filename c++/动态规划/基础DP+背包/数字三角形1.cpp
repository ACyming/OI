#include <bits/stdc++.h>
using namespace std;
int a[2000][2000], f[2000][2000];
int bz[2000][2000][3];
int maxx;
void hs(int x, int y) {
	if (bz[x][y][1] == 0) {
		return;
	}
	hs(bz[x][y][1], bz[x][y][2]);
	maxx = max(f[bz[x][y][1]][bz[x][y][2]], maxx);
}
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= i; j++) {
			cin >> a[i][j];
			f[i][j] = a[i][j];
		}
	for (int i = n - 1; i >= 1; i--)
		for (int j = 1; j <= i; j++)
			if (a[i + 1][j + 1] > a[i + 1][j]) {
				a[i][j] = a[i][j] + a[i + 1][j + 1];
				bz[i][j][1] = i + 1;
				bz[i][j][2] = j + 1;
			} else {
				a[i][j] = a[i][j] + a[i + 1][j];
				bz[i][j][1] = i + 1;
				bz[i][j][2] = j;
			}
	int ans = 0;
//	for(int i=1;i<=n;i++)
//	{
//		ans=max(ans,f[n][i]);
//	}
	hs(1, 1);
	maxx = max(maxx, f[1][1]);
	cout << a[1][1] + maxx;
}
