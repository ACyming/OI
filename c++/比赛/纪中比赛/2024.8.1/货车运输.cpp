#include <bits/stdc++.h>
using namespace std;
const int M = 50020, N = 10000;
int n, m, cnt, head[N], fa[N], f[N][30], d[N], w[N][30];
struct Node {
    int u, v, w;
} a[M];
struct edge {
    int to, next, w;
} g[M];
void add(int u, int v, int w) {
    g[++cnt] = {v, head[u], w};
    head[u] = cnt;
}
int find(int x) {
    if (fa[x] != x)
        fa[x] = find(fa[x]);
    return fa[x];
}
void kl() {
    int tot = 0;
    for (int i = 1; i <= m; i++) {
        int fu = find(a[i].u);
        int fv = find(a[i].v);
        if (fu != fv) {
            fa[fu] = fv;
            add(a[i].u, a[i].v, a[i].w);
            add(a[i].v, a[i].u, a[i].w);
            tot++;
        }
        if (tot == n - 1)
            return;
    }
    return;
}
int bz[N];
void depth(int node) {
    bz[node] = 1;
    for (int i = head[node]; i; i = g[i].next) {
        int to = g[i].to;
        if (!bz[to]) {
            d[to] = d[node] + 1;
            f[to][0] = node;
            w[to][0] = g[i].w;
            
            depth(to);
        }
    }
    return ;
}
void lcaset() {
    for (int i = 1; i <= n; i++)
        if (!bz[i]) {  
            d[i] = 1;
            depth(i);
            f[i][0] = i;
            w[i][0] = INT_MAX;
        }
    for (int i = 1; i <= 20; i++)
        for (int j = 1; j <= n; j++) {
            f[j][i] = f[f[j][i - 1]][i - 1];
            w[j][i] = min(w[j][i - 1], w[f[j][i - 1]][i - 1]);
        }
}
int lca(int x, int y) {
    if (find(x) != find(y))
        return -1;
    int ans = INT_MAX;
    if (d[x] > d[y])
        swap(x, y);
    for (int i = 20; i >= 0; i--)
        if (d[f[y][i]] >= d[x]) {
            ans = min(ans, w[y][i]);
            y = f[y][i];
        }
    if (x == y)
        return ans;
    for (int i = 20; i >= 0; i--)
        if (f[x][i] != f[y][i]) {
            ans = min(ans, min(w[x][i], w[y][i]));
            x = f[x][i];
            y = f[y][i];
        }
    return min(ans, min(w[x][0], w[y][0]));
}
bool cmp(Node xx, Node yy) {
    return xx.w > yy.w;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        cin >> a[i].u >> a[i].v >> a[i].w;
    sort(a + 1, a + 1 + m, cmp);
    for (int i = 1; i <= n; i++)
        fa[i] = i;
    kl();
    lcaset();
    int q;
    cin >> q;
    for (int i = 1; i <= q; i++) {
        int x, y;
        cin >> x >> y;
        cout << lca(x, y) << endl;
    }
    return 0;
}