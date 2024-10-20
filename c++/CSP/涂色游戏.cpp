#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int t, n, m, q;
pair<int, int> xx[N], yy[N];
int main() {
    cin >> t;
    while (t--) {
        memset(xx, 0, sizeof(xx));
        memset(yy, 0, sizeof(yy));
        scanf("%d%d%d", &n, &m, &q);
        for (int i = 1; i <= q; i++) {
            int opt, x, c;
            scanf("%d%d%d", &opt, &x, &c);
            if (!opt) {
                xx[x].first = c;
                xx[x].second = i;
            } else {
                yy[x].first = c;
                yy[x].second = i;
            }
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                printf("%d ", ((xx[i].second > yy[j].second) ? xx[i].first
                                                            : yy[j].first));
            }
            puts("");
        }
    }
    return 0;
}