#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m;
int a[400], b[200], ans = INT_MIN;
int f[50][50][50][50], _[50];
main() {
#ifdef ONLINE_JUDGE
    freopen("tortoise.in", "r", stdin);
    freopen("tortoise.out", "w", stdout);
#endif
    scanf("%lld%lld", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%lld", &a[i]);
    for (int i = 1; i <= m; i++) {
        scanf("%lld", &b[i]);
        _[b[i]]++;
    }
    f[0][0][0][0] = a[1];
    for (int a1 = 0; a1 <= _[1]; a1++)
        for (int a2 = 0; a2 <= _[2]; a2++)
            for (int a3 = 0; a3 <= _[3]; a3++)
                for (int a4 = 0; a4 <= _[4]; a4++) {
                    if (a1 > 0) f[a1][a2][a3][a4] = max(f[a1 - 1][a2][a3][a4] + a[1 + a1 + a2 * 2 + a3 * 3 + a4 * 4], f[a1][a2][a3][a4]);
                    if (a2 > 0) f[a1][a2][a3][a4] = max(f[a1][a2 - 1][a3][a4] + a[1 + a1 + a2 * 2 + a3 * 3 + a4 * 4], f[a1][a2][a3][a4]);
                    if (a3 > 0) f[a1][a2][a3][a4] = max(f[a1][a2][a3 - 1][a4] + a[1 + a1 + a2 * 2 + a3 * 3 + a4 * 4], f[a1][a2][a3][a4]);
                    if (a4 > 0) f[a1][a2][a3][a4] = max(f[a1][a2][a3][a4 - 1] + a[1 + a1 + a2 * 2 + a3 * 3 + a4 * 4], f[a1][a2][a3][a4]);
                }
    printf("%lld", f[_[1]][_[2]][_[3]][_[4]]);
    return 0;
}   