#include <bits/stdc++.h>
#define int long long
const int mod = 999983;
using namespace std;
int n, num[20], ans, f[1020][10020];
string s;
main() {
    cin >> n >> s;
    f[0][0] = 1;
    for (int i = 0; i < s.size(); i++)
        num[i] = s[i] - '0';
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= 9 * i; j++)
            for (int k = 0; k < s.size(); k++)
                if (j - num[k] >= 0)
                    f[i][j] = (f[i][j] + f[i - 1][j - num[k]]) % mod;
    for (int i = 0; i <= 9 * n; i++)
        ans = (ans + f[n][i] * f[n][i] % mod) % mod;
    ans = (ans * 2) % mod;
    int xx = 0, yy = 0;
    for (int i = 0; i <= ((n + 1) / 2) * 9; i++)
        xx = (xx + f[(n + 1) / 2][i] * f[(n + 1) / 2][i] % mod) % mod;
    for (int i = 0; i <= (n / 2) * 9; i++)
        yy = (yy + f[n / 2][i] * f[n / 2][i] % mod) % mod;
    cout << ans - (xx * yy % mod + mod) % mod;
    return 0;
}
