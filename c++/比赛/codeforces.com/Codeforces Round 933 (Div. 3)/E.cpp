#include <bits/stdc++.h>
using namespace std;
int t;
int n, m, k, d;
int a[105][200005], f[105][200005];
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k >> d;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
                if (j == 2 || j == m - 1)
                    f[i][j] = a[i][j];
            }
        }
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                for (int k = max(j - d - 1, 1); k <= j - 1; k++)
                    f[i][j] = min(f[i][k], f[i][j]);
        
    }
    return 0;
}
