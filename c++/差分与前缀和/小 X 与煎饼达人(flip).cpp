#include <bits/stdc++.h>
using namespace std;
const int N=1000000;
int n, m;
int x, y;
int a[N], b[N];
int ans;
int main() {
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		cin >> x >> y;
		b[x] += 1;
		b[y + 1] -= 1;
	}
	for (int i = 1; i <= n; i++) {
		a[i] = a[i - 1] + b[i];
	}
	for(int i = 1; i <= n; i++)
	{
		if(a[i]%2==0)
			a[i]=0;
		else
			a[i]=1;
	}
	for (int i = 1; i <= n; i++) {
		if (a[i] == 1) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}
