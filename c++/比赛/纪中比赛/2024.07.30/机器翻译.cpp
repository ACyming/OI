#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, ans;
bool bz[1020];
int head = 1, tail = 0, q[1020];
main() {
    freopen("translate.in", "r", stdin);
    freopen("translate.out", "w", stdout);
    scanf("%lld%lld", &m, &n);
    int x;
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &x);
        if (!bz[x]) {
            ans++;
            q[++tail] = x;
            bz[x] = 1;
            if (tail + 1 - head > m) {
                bz[q[head]] = 0;
                q[head] = -999;
                head++;
            }
        }
    }
    printf("%lld",ans);
    return 0;
}