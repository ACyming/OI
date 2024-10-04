#include <bits/stdc++.h>
using namespace std;
long long n, t;
long long a[1002][1002], g[1002][1002];
long long ans;
long long sx, sy;
void fz() {
	for (long long i = 1; i <= n; i++)
		for (long long j = 1; j <= n; j++)
			g[i][j] = a[i][j];
}
void run() {
	for (long long j = 1; j <= n; j++) g[sx][j] = 0;
	for (long long j = 1; j <= n; j++) g[j][sy] = 0;
	for (long long i = 1; i < sx; i++)
		for (long long j = 1; j < sy; j++)
			ans += g[i][j];
	for (long long i = sx; i <= n; i++)
		for (long long j = sy; j <= n; j++)
			ans += g[i][j];
}
int main() {
	freopen("scout.in", "r", stdin);
	freopen("scout.out", "w", stdout);
	cin >> n >> t;
	for (long long i = 1; i <= n; i++)
		for (long long j = 1; j <= n; j++)
			cin >> a[i][j];
	for (long long i = 1; i <= t; ++i) {
		ans = 0;
		cin >> sx >> sy;
		fz();
		run();
		cout << ans << endl;
	}
	return 0;
}
