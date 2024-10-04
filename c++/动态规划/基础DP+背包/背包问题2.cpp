#include <bits/stdc++.h>
using namespace std;
int w[10000], c[10000], k, n, dp[10000];
int main() {
	freopen("beibao2.in","r",stdin);
	freopen("beibao2.out","w",stdout);
	cin >> k >> n;
	for (int i = 1; i <= n; i++) {
		cin >> w[i] >> c[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = w[i]; j <= k; j++) {
			dp[j] = max(dp[j], dp[j - w[i]] + c[i]);
		}
	}
	cout << dp[k];
	return 0;
}
