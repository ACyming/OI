#include <bits/stdc++.h>
#define int long long
using namespace std;
int a, b, k, n, m;
int f[1002][1002];
int ypow(int x, int y) {
    int s = 1;
    while (y--)
        s = s * x % 10007;
    return s;
}
main() {
    cin >> a >> b >> k >> n >> m;
    f[1][1] = f[2][1] = f[2][2] = 1;
    for (int i = 3; i <= 1001; i++)
        for (int j = 1; j <= i; j++)
            f[i][j] = f[i - 1][j - 1] + f[i - 1][j] % 10007;
    cout << f[k + 1][n + 1] * ypow(a, n) * ypow(b, m) % 10007;
    return 0;
}