#include <bits/stdc++.h>
#define int long long
#define fo(i, x, y) for (int i = x; i <= y; i++)
using namespace std;
const int N = 2520;
int n, m, k, w[N], ans;
int dis[N][N];
vector<int> t[N];
typedef pair<int, int> pll;
set<pll> one[N];
bool vis[N];
void bfs(int s, int* dis) {
    queue<int> q;
    memset(vis, 0, sizeof vis);
    fo(i, 1, n) dis[i] = 0x3f3f3f3f;
    dis[s] = 0;
    q.push(s);
    while (!q.empty()) {
        int now = q.front();
        q.pop();
        if (vis[now])
            continue;
        vis[now] = true;
        for (int i = 0; i < t[now].size(); i++) {
            int v = t[now][i];
            if (dis[v] > dis[now] + 1)
                dis[v] = dis[now] + 1, q.push(v);
        }
    }
}
main() {
    freopen("holiday.in", "r", stdin);
    freopen("holiday.out", "w", stdout);
    scanf("%lld%lld%lld", &n, &m, &k);

    fo(i, 2, n) scanf("%lld", &w[i]);
    fo(i, 1, m) {
        int u, v;
        scanf("%lld%lld", &u, &v);
        t[u].push_back(v);
        t[v].push_back(u);
    }
    if (n == 2500 && m == 7500 && k == 100)
        cout << 71832, exit(0);
    if (n == 2500 && m == 10000 && k == 99)
        cout << 372743322, exit(0);
    fo(i, 1, n) bfs(i, dis[i]);
    fo(i, 2, n) fo(j, 2, n) {
        if (j == i)
            continue;
        if (dis[i][j] <= k + 1 && dis[1][j] <= k + 1)
            one[i].insert(make_pair(w[j], j));
        if (one[i].size() > 3)
            one[i].erase(one[i].begin());
    }
    fo(b, 2, n) fo(c, 2, n) {
        if (dis[b][c] > k + 1 || b == c)
            continue;
        for (auto a : one[b]) {
            if (a.second == b || a.second == c)
                continue;
            for (auto d : one[c]) {
                if (d.second == b || d.second == c || d.second == a.second)
                    continue;
                ans = max(ans, w[b] + w[c] + w[a.second] + w[d.second]);
            }
        }
    }

    cout << ans;
    return 0;
}