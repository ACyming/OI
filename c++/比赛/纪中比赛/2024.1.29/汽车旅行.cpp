#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, l;
int w[1200], c[1200];
double ans = -1e20;
double f[1200][1200]; // 前i个城市，油箱剩余为j的时候，金钱的最大值
main()
{
#ifdef ONLINE_JUDGE
    freopen("car.in", "r", stdin);
    freopen("car.out", "w", stdout);
#endif
    cin >> n >> m >> l;
    for (int i = 1; i < n; i++)
        cin >> w[i];
    for (int i = 1; i <= n; i++)
        cin >> c[i];
    for (int i = 1; i <= 1199; i++)
        for (int j = 0; j <= 1199; j++)
            f[i][j] = -1e20;
    f[1][0] = m;
    for (int i = 2; i <= n; i++) {                                                        // 枚举城市
        for (int j = 0; j <= l - w[i - 1]; j++) {                                         // 枚举剩下的油
            f[i][j] = f[i - 1][j + w[i - 1]];                                             // 不买不卖
            for (int k = 1; k <= j + w[i - 1] /*上一个城市我还剩下的油*/; k++)            // 枚举要买进的油
                if (f[i - 1][j + w[i - 1] - k] >= k * c[i - 1])                           // 如果我的钱足够我买k升油
                    f[i][j] = max(f[i - 1][j + w[i - 1] - k] - k * c[i - 1], f[i][j]);    // 那我就买
            for (int k = 1; k <= l - (j + w[i - 1]); k++)                                 // 枚举我要卖出的油
                f[i][j] = max(f[i - 1][j + w[i - 1] + k] + k * c[i - 1] * 0.95, f[i][j]); // 卖出去！
        }
    }
    for (int i = 0; i <= l - w[n - 1]; i++)
        ans = max(ans, f[n][i] + /*要把剩下的油全部卖光*/i * c[n] * 0.95);
    if (ans != -1e20/*INT_MIN不够大，要用-1e20*/)
        printf("%.2lf", ans);
    else
        cout << -1;
    return 0;
}
