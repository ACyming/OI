#include <bits/stdc++.h>
using namespace std;
int n, m, s1, s2, e1, e2;
int d[50][50];
bool vis[50][50];
char mp[50][50];
int calc(int x, int y, int xx, int yy) {
    return abs(x - xx) + abs(y - yy);
}
typedef pair<int, pair<int, int>> PI;
typedef pair<int, PI> PII;
priority_queue<PII, vector<PII>, greater<PII>> q;
int dx[] = {0, 1, -1, 0, 0}, dy[] = {0, 0, 0, -1, 1};
void A() {
    memset(d, 0x3f, sizeof d);
    d[s1][s2] = 0;
    q.push({calc(s1, s2, e1, e2), {0, {s1, s2}}});
    while (!q.empty()) {
        PII h = q.top();
        q.pop();
        pair<int, int> p = h.second.second;
        int dis = h.second.first;
        if (vis[p.first][p.second])
            continue;
        vis[p.first][p.second] = 1;
        if (p.first == e1 && p.second == e2) {
            cout << dis;
            exit(0);
        }
        for (int i = 1; i <= 4; i++) {
            int xx = p.first + dx[i];
            int yy = p.second + dy[i];
            int diss;
            if (mp[xx][yy] == '@')
                diss = 1;
            else if (mp[xx][yy] == 'x')
                diss = 2;
            else
                continue;
            if (diss + dis < d[xx][yy]) {
                d[xx][yy] = diss + dis;
                q.push({dis + diss + calc(xx, yy, e1, e2),
                        {dis + diss, {xx, yy}}});
            }
        }
    }
}
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mp[i][j];
            if (mp[i][j] == 'r')
                s1 = i, s2 = j, mp[i][j] = '@';
            if (mp[i][j] == 'a')
                e1 = i, e2 = j, mp[i][j] = '@';
        }
    }
    A();
    cout << "Impossible";
    return 0;
}