#include <bits/stdc++.h>
using namespace std;
const int N = 150020;
struct node {
    int x, y;
} g[300005];
int head[N], n, m, e, cnt;
int p[60000005],f[N], v[N], w[N],sz[N], dfn[N];
void add(int x, int y) {
    e++;
    g[e].y = y;
    g[e].x = head[x];
    head[x] = e;
}
void dg(int i) {
    int x, y, l = 1;
    cnt++;
    sz[i] = 1;
    dfn[cnt] = i;
    x = head[i];
    y = g[x].y;
    while (x) {
        dg(y);
        sz[i] += sz[y];
        x = g[x].x;
        y = g[x].y;
    }
}
int main() {
    scanf("%d%d", &n, &m);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &f[i]);
        if (!f[i])
            f[i] = n + 1;
        add(f[i], i);
    }
    for (int i = 1; i <= n; i++)
        scanf("%d", &v[i]);
    for (int i = 1; i <= n; i++)
        scanf("%d", &w[i]);
    int (&f)[n + 1][m + 1] = (decltype(f))p;
    dg(n + 1);
    for (int i = n + 1; i >= 1; i--)
        for (int j = 0; j <= m; j++) {
            int x = dfn[i];
            f[i][j] = f[i + sz[x]][j];
            if (j >= v[x])
                f[i][j] = max(f[i][j], f[i + 1][j - v[x]] + w[x]);
        }
    printf("%d", f[1][m]);
    return 0;
}