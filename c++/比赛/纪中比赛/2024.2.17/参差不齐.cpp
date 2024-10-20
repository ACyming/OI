#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, d;
int maxn = INT_MIN, minn = INT_MAX;
int a[5 * (int)1e5 + 10];
int dp[5 * (int)1e5 + 10];
int maxx;
int ans = -8493680;
main()
{ 
#ifdef ONLINE_JUDGE
    freopen("smooth.in", "r", stdin);
    freopen("smooth.out", "w", stdout);
#endif
    scanf("%lld%lld", &n, &d);
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &a[i]);
        maxn = max(maxn, a[i]);
        minn = min(minn, a[i]);
    }
    for (int i = 1; i <= n; i++) {
        maxx = INT_MIN;
        for (int j = max(a[i] - d, minn); j <= min(a[i] + d, maxn); j++) {
            maxx = max(maxx, dp[j]);
        }
        dp[a[i]] = maxx + 1;
        ans = max(ans, dp[a[i]]);
    }
    cout << ans;
    return 0;
}
