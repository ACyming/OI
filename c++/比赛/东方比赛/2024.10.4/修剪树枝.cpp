#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n, c, head[N], cnt;
struct {
    int v, next, w;
} g[N * 2];
void add(int u, int v, int w) {
    g[++cnt] = {v, head[u], w};
    head[u] = cnt;
}
int check(int x, int fa, int mid) {
    int ans = 1;
    for (int i = head[x]; i; i = g[i].next) {
        int to = g[i].v;
        if (to != fa && g[i].w >= mid) {
            ans = ans + check(to, x, mid);
        }
    }
    return ans;
}
int main() {
    int l = 0, r = 0;
    cin >> n >> c;
    for (int i = 1; i < n; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        add(u, v, w);
        add(v, u, w);
        r = max(r, w);
    }
    r++;
    while (l <= r) {
        int mid = l + r >> 1;
        if (check(1, 0, mid) <= c)
            r = mid - 1;
        else
            l = mid + 1;
    }
    cout << l;
    return 0;
}