#include <bits/stdc++.h>
using namespace std;
const int M = 120;
int g[M][M], c[10020];
int n, m, ans;
int main()
{
    cin >> n >> m;
    memset(g, 0x3f, sizeof(g));
    for (int i = 1; i <= n; i++) {
        g[i][i] = 0;
    }
    for (int i = 1; i <= m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        g[a][b] = g[b][a] = c;
    }
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (i != j && j != k && k != i)
                    g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
    for (int i = 2; i <= n; i++) {
        ans += g[i - 1][i];
        cout << g[i - 1][i] << endl;
    }
    cout << ans;
    return 0;
}
