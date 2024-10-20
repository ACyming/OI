#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m;
struct Node {
    int x, t;
};
long long solve(vector<Node>& a) {
    long long re = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            long long cmp = abs((long long)a[i].x - a[j].x) /
                            abs((long long)a[i].t - a[j].t);
            re = max(re, cmp);
        }
    }
    return re;
}
main() {
    scanf("%lld%lld", &n, &m);
    vector<Node> a(n);
    for (int i = 0; i < n; ++i)
        scanf("%lld%lld", &a[i].x, &a[i].t);
    for (int i = 0; i < m; ++i) {
        int u, v;
        scanf("%lld%lld", &u, &v);
        int tmp = a[u - 1].t;
        a[u - 1].t = v;
        long long ans = solve(a);
        printf("%lld\n", ans);
        a[u - 1].t = tmp;
    }

    return 0;
}