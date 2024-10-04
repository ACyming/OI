#include <bits/stdc++.h>
using namespace std;
int n, m, q, f[1020][1020], mp[1020][1020], x, y, x2, y2;
int main()
{
    cin >> n >> m >> q;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> mp[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            f[i][j] = f[i - 1][j] + f[i][j - 1] + mp[i][j] - f[i - 1][j - 1];
    for (int i = 1; i <= q; i++) {
        cin >> x >> y >> x2 >> y2;
        cout << f[x2][y2] - f[x - 1][y2] - f[x2][y - 1] + f[x - 1][y - 1] << endl;
    }
}
