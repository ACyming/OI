#include <bits/stdc++.h>
using namespace std;
char s[100];
int f[100][100];
int main()
{

    scanf("%s", s + 1);
    int n = strlen(s + 1);

    memset(f, 0x3f, sizeof f);
    for (int i = 1; i <= n; i++)
        f[i][i] = 1;
    for (int len = 2; len <= n; len++)
    {
        for (int i = 1; i + len - 1 <= n; i++)
        {
            int j = i + len - 1;
            if (s[i] == s[j])
            {
                f[i][j] = min(f[i + 1][j], f[i][j - 1]);
                continue;
            }
            for (int k = i; k <= j - 1; k++)
            {
                f[i][j] = min(f[i][k] + f[k + 1][j], f[i][j]);
            }
        }
    }
    cout << f[1][n];
    return 0;
}
