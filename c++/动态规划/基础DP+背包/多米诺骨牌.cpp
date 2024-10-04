#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = INT_MAX;
int n;
int sum[10020], a[20][10020], f[1020][6020];
//sum:前i个多米诺骨牌的上下总和
main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[0][i] >> a[1][i];
		sum[i] = sum[i - 1] + a[0][i] + a[1][i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= sum[i]; j++) {
			f[i][j] = INF;
		}
	}
	f[1][a[1][1]] = 1;
	f[1][a[0][1]] = 0;
	for (int i = 2; i <= n; i++)
		for (int j = 0; j <= sum[i - 1]; j++) {
			if (f[i - 1][j] != INF)
				f[i][j + a[1][i]] = min(f[i][j + a[1][i]], f[i - 1][j] + 1);
			f[i][j + a[0][i]] = min(f[i][j + a[0][i]], f[i - 1][j]);
		}
	for (int i = 0; i <= sum[n] / 2; i++) {
		if (f[n][sum[n] / 2 + i] != INF) {
			cout << f[n][sum[n] / 2 + i];
			return 0;
		}
	}
	return 0;
}
