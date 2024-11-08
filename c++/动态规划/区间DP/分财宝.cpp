#include <bits/stdc++.h>
using namespace std;
const int N = 5e3 + 20;
int f[N][N], s[N];
int n;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
        s[i] += s[i - 1];
    }
    for (int len = 1; len <= n; len++)
    {
        for (int l = 1; l + len - 1 <= n; l++)
        {
            int r = l + len - 1;
            if (len == 1)
                f[l][r] = s[r] - s[l - 1];
            else
                f[l][r] = s[r] - s[l - 1] - min(f[l + 1][r], f[l][r - 1]);
        }
    }
    cout << f[1][n];
    return 0;
}