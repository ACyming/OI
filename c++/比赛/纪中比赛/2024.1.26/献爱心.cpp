#include <bits/stdc++.h>
#define int long long
using namespace std;
inline unsigned read()
{
    unsigned x = 0;
    char c = getchar();
    while (c < '0' || c > '9') {
        c = getchar();
    }
    while (c >= '0' && c <= '9') {
        x = x * 10 + (c - '0');
        c = getchar();
    }
    return x;
}
main()
{
#ifdef ONLINE_JUDGE
    freopen("manage.in", "r", stdin);
    freopen("manage.out", "w", stdout);
#endif
    register int n, m, k;
    int a[1020], dp[1020][1020];
    register int maxx = -0x3f;
    register int ans = 0;
    memset(a, 0, sizeof(a));
    memset(dp, 0, sizeof(dp));
    n = read();
    m = read();
    k = read();
    for (int i = 1; i <= n; i++)
        a[i] = read(), a[i] += a[i - 1];
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            for (int k1 = i; k1 + k - 1 <= j; k1++)
                dp[i][j] = max(dp[i][j], dp[i - 1][k1 - 1] + a[k1 + k - 1] - a[k1 - 1]);
    printf("%d", dp[m][n]);
    return 0;
}