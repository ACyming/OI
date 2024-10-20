#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, ans;
int mp[1020][1020];
int f[1020][1020][4]; // 0：下，1：上，2：右
main()
{
    freopen("number.in", "r", stdin);
    freopen("number.out", "w", stdout);
    scanf("%lld%lld", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%lld",&mp[i][j]);
    memset(f, -0x3f, sizeof(f));
    f[1][1][0] = f[1][1][1] = f[1][1][2] = mp[1][1];
    for (int i = 2; i <= n; i++)
        f[i][1][0] = f[i - 1][1][0] + mp[i][1];
    for (int j = 1; j <= m; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i != 1) // 因为i - 1 = 0 ，0不可以被上面转移
                f[i][j][0] = max(f[i - 1][j][0], f[i - 1][j][2]) + mp[i][j];
            f[i][j][2] = max(f[i][j - 1][0], max(f[i][j - 1][1], f[i][j - 1][2])) + mp[i][j];
        }
        for (int i = n - 1; i >= 1; i--)
            f[i][j][1] = mp[i][j] + max(f[i + 1][j][1], f[i + 1][j][2]);
    }
    printf("%lld", max({f[n][m][0], f[n][m][1], f[n][m][2]}));
    return 0;
}