#include <bits/stdc++.h>
using namespace std;
long long n, m, p;
long long a[20][20], f[20][20], g[20][20];
long long ans, c[213];
int main() {
	cin >> n >> m;
	for (long long i = 1; i <= n; ++i) 
		for (long long j = 1; j <= m; ++j) 
			cin >> a[i][j];
	for (long long i = 1; i <= n; ++i) {
		for (long long j = 1; j <= m; ++j) {
			for (long long k = j; k >= 0; --k) {
				if (f[i][j] < f[i - 1][j - k] + a[i][k]) {
					f[i][j] = f[i - 1][j - k] + a[i][k];
					g[i][j] = k;
				}
			}
		}
	}
	
	for (long long i = m; i >= 0; --i) {
		if (ans < f[n][i]) {
			ans = f[n][i];
			p = i;
		}
	}
	
	cout << ans << endl;
	for (long long i = n; i >= 1; --i) {
		c[i] = g[i][p];
		p -= g[i][p];
	}
	
	for (long long i = 1; i <= n; ++i)
		cout << i << " " << c[i] << endl;
	return 0;
}
