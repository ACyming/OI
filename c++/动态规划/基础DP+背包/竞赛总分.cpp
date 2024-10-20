#include <bits/stdc++.h>
using namespace std;
int w[10005], c[10005], k, n, dp[10005];
int main() {
	cin >> k >> n;
	for (int i = 1; i <= n; i++) {
		cin >> c[i] >> w[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = w[i]; j <= k; j++) {
			dp[j] = max(dp[j], dp[j - w[i]] + c[i]);
		}
	}
	cout << dp[k];
	return 0;
}
