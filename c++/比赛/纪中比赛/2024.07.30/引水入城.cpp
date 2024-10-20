#include <bits/stdc++.h>
using namespace std;

int n, m, ans;
int mp[600][600], r[600][600], l[600][600];
int fx[] = {0, 1, -1, 0, 0}, fy[] = {0, 0, 0, -1, 1};
bool vis[600][600];
void dfs(int x, int y) {
    vis[x][y] = 1;
    for (int i = 1; i <= 4; i++) {
        int xx = x + fx[i];
        int yy = y + fy[i];
        if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && mp[xx][yy] < mp[x][y]) {
            if (!vis[xx][yy])
                dfs(xx, yy);
            r[x][y] = max(r[xx][yy], r[x][y]);
            l[x][y] = min(l[xx][yy], l[x][y]);
        }
    }
    return;
}
int main() {
#ifdef ONLINE_JUDGE
    freopen("flow.in", "r", stdin);
    freopen("flow.out", "w", stdout);
#endif
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            cin >> mp[i][j];
            r[i][j] = INT_MIN;
            l[i][j] = INT_MAX;
        }
    for (int i = 1; i <= m; i++)
        r[n][i] = l[n][i] = i;
    for (int i = 1; i <= m; i++)
        dfs(1, i);
    int aa = 0;
    for (int i = 1; i <= m; i++)
        if (!vis[n][i])
            aa++;
    if (aa != 0) {
        cout << 0 << endl << aa;
        return 0;
    }
    int k = 1;
    while (k <= m) {
        int cmp = 0;
        ans++;
        for (int i = 1; i <= m; i++)
            if(l[1][i]<=k)
                cmp = max(cmp, r[1][i]);
        k = cmp + 1;
    }
    cout << 1 << endl << ans;
    return 0;
}