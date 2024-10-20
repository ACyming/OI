#include <bits/stdc++.h>
using namespace std;
int a[1001][1001], f[1001][1001];
int main() {
	freopen("numtri.in","r",stdin);
	freopen("numtri.out","w",stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= i; j++)
			cin >> a[i][j];
	f[1][1] = a[1][1];
	for (int i = 2; i <= n; i++)
		for (int j = 1; j <= i; j++)
			f[i][j] = max(f[i - 1][j - 1], f[i - 1][j]) + a[i][j];
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		ans = max(ans, f[n][i]);
	}
	cout << ans;
}
