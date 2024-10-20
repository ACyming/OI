#include <bits/stdc++.h>
using namespace std;
long long c[10000], k, dp[10000];
int main() {
	for (long long i = 1; i <= 10; i++) {
		cin >> c[i];
	}
	cin >> k;
	memset(dp, 114514, sizeof(dp));
	dp[0] = 0;
	for (long long i = 1; i <= 10; i++) {
		for (long long j = i; j <= k; j++) {
			dp[j] = min(dp[j], dp[j - i] + c[i]);
		}
	}
	cout << dp[k];
	return 0;
}
