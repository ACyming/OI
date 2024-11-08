#include <bits/stdc++.h>

using namespace std;

int f[510][510][310];
char a[510][510];
int n, m, x;
int main()
{
    int t;

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d%d", &n, &m, &x);
        memset(f, 0, sizeof(f)); // 多组测试数据,要先情况部分变量的值/每行读入一个字符串,从每行下标为1的位置开始读入
        for (int i = 1; i <= n; i++)
            scanf("%s", a[i] + 1);
        for (int i = 1; i <= n; i++)
        {

            for (int j = 1; j <= m; j++)
            {
                for (int k = 0; k <= x; k++)
                {

                    if (a[i][j] != '?')
                        f[i][j][k] = max(f[i - 1][j][k], f[i][j - 1][k]) + (a[i][j] - '0');

                    else if (k == 0)
                        f[i][j][k] = max(f[i - 1][j][k], f[i][j - 1][k]);
                    else
                        f[i][j][k] = max(max(f[i - 1][j][k], f[i][j - 1][k]), max(f[i - 1][j][k - 1], f[i][j - 1][k - 1]) + 1);
                }
            }
        }
        int ans = 0;
        for (int k = 0; k <= x; k++)
            ans = max(ans, f[n][m][k]);
        printf("%d\n", ans);
    }
}