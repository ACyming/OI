#include <bits/stdc++.h>
#define int unsigned long long
using namespace std;
const int N = 100000;
int n, m, c, k, a;
int p[N], q[N];
bool vis[65], bz[100000001];
main() {
    cin >> n >> m >> c >> k;
    int x;
    for (int i(1); i <= n; i++) {
        cin >> x;
        a |= x;
    }
    for (int i(1); i <= m; i++) {
        cin >> p[i] >> q[i];
        if ((a >> p[i]) & 1 == 1)
            bz[q[i]] = 1;
    }
    int ans(0);
    for (int i(1); i <= m; i++) {
        if (bz[q[i]] == 0) {
            if (vis[p[i]])
                continue;
            ans++;
            vis[p[i]] = 1;
        }
    }
    if (!n && m == 0 && k - ans == 64) {
        cout << "18446744073709551616";
        return 0;
    }
    int anss(1);
    for (int i(1); i <= k - ans; i++)
        anss *= 2;
    cout << anss - n;
    return 0;
}
