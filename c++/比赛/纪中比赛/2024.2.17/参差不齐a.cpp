#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, d;
int a[5 * (int)1e5 + 10];
int dp[5 * (int)1e5 + 10];
main() {
#ifdef ONLINE_JUDGE
	freopen("smooth.in", "r", stdin);
	freopen("smooth.out", "w", stdout);
#endif
	scanf("%lld%lld", &n, &d);
	for (int i = 1; i <= n; i++)
		scanf("%lld", &a[i]), dp[i] = 1;
	for (int i = 1; i <= n; i++) {//枚举i个人
		for (int j = i; j > 1; j--) {
			if (abs(a[j] - a[i]) <= d) {
				dp[i] = max(dp[j] + 1, dp[i]);
				break;
			}
		}
	}
	for (int i = 1; i <= n; i++) {//枚举i个人
		cout << dp[i] << " ";
	}
	printf("%lld", dp[n]);
	return 0;
}
