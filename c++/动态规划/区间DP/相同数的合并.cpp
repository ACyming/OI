#include <bits/stdc++.h>
using namespace std;
const int N = 260;
int a[N], f[N][N];
int n, ans;
int main()
{
    cin >> n;
    memset(f, -0x3f, sizeof f);
    for (int i = 1; i <= n; i++)
        cin >> f[i][i];
    for (int len = 2; len <= n; len++)
    {
        for (int i = 1; i + len - 1 <= n; i++)
        {
            int j = i + len - 1;
            for (int k = i; k < j; k++)
            {
                if (f[i][k] == f[k + 1][j])
                {
                    f[i][j] = max(f[i][j], f[i][k] + 1);
                    ans = max(f[i][j], ans);
                }
            }
        }
    }
    cout << ans;
    return 0;
}