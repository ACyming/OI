#include <bits/stdc++.h>
using namespace std;
int n, m, f[20020 * 2];
struct Node {
    int a, b, c;
} g[100001];
int cmp(Node xx, Node yy) {
    return xx.c > yy.c;
}
int find(int x) {
    return f[x] == x ? x : f[x] = find(f[x]);
}
int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        cin >> g[i].a >> g[i].b >> g[i].c;
    for (int i = 1; i <= n * 2; i++)
        f[i] = i;
    sort(g + 1, g + m + 1, cmp);
    for (int i = 1; i <= m; i++) {
        int fx = find(g[i].a);
        int fy = find(g[i].b);
        if (fx == fy) {
            cout << g[i].c;
            return 0;
        }
        if (fx != fy) {
            f[fy] = find(g[i].a + n);
            f[fx] = find(g[i].b + n);
        }
    }
    cout << 0;
    return 0;
}