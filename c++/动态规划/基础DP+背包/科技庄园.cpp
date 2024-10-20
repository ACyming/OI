#include <bits/stdc++.h>
using namespace std;
int n, m, ti, ps;
int mp[105][105];
int cnt, dp[10005][150];
struct Node {
    int x, y, z;
} a[10005];
int main()
{
    cin >> n >> m >> ti >> ps;
    ps = min(ti, ps - 1);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> mp[i][j];
    int x;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            cin >> x;
            if (x != 0)
                a[++cnt] = {x /*数量*/, (i + j) * 2 /*重量*/, mp[i][j] /*价值*/};
        }
    for (int i = 1; i <= cnt; i++)
        for (int j = 1; j <= ps; j++)
            for (int k = 0; k <= a[i].x && k * a[i].y <= j; k++)
                dp[i][j] = max(dp[i][j], dp[i - 1][j - k * a[i].y] + k * a[i].z);

    cout << dp[cnt][ps];
    return 0;
}