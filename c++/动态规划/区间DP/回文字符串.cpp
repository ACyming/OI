#include <bits/stdc++.h>
using namespace std;
int n;
char s[5020];
int f[5020][5020];
int main()
{
    cin >> n >> s + 1;
    for (int i = 1; i <= n; i++)
        f[i][i] = 1;
    for (int r = 1; r <= n; r++)
    {
        for (int l = r - 1; l >= 1; l--)
        {
            if (s[l] == s[r])
                f[l][r] = f[l + 1][r - 1] + 2;
            else
                f[l][r] = max(f[l + 1][r], f[l][r - 1]);
        }
    }
    cout << n - f[1][n];
    return 0;
}