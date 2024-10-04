#include <bits/stdc++.h>
using namespace std;
int t, n, m, k, f[1005][1005], l, x;
char s;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        for (int i = 0; i <= m; i++)
            for (int j = 0; j <= n; j++)
                f[i][j] = 0;
        f[0][k] = 1;
        for (int i = 1; i <= m; i++)
        {
            cin >> l >> s;
            for (int j = 1; j <= n; j++)
            {
                if (f[i - 1][j] == 1)
                {
                    if (s == '0')
                    {
                        if (j + l > n)
                            f[i][j + l - n] = 1;
                        else
                            f[i][j + l] = 1;
                    }
                    if (s == '1')
                    {
                        if (j - l <= 0)
                            f[i][j - l + n] = 1;
                        else
                            f[i][j - l] = 1;
                    }
                    if (s == '?')
                    {
                        if (j + l > n)
                            f[i][j + l - n] = 1;
                        else
                            f[i][j + l] = 1;
                        if (j - l <= 0)
                            f[i][j - l + n] = 1;
                        else
                            f[i][j - l] = 1;
                    }
                }
            }
        }
        int cnt = 0;
        for (int i = 1; i <= n; i++)
            if (f[m][i] == 1)
                cnt++;
        cout << cnt << endl;
        for (int i = 1; i <= n; i++)
        {
            if (f[m][i] == 1)
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}