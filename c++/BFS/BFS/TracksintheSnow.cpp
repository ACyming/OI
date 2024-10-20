#include <bits/stdc++.h>
using namespace std;
const int N = 4e3 + 10;
int n, m, ans, mp[N][N];
bool vis[N][N];
int dx[] = {0, 0, 0, -1, 1}, dy[] = {0, 1, -1, 0, 0};
queue<pair<int, int> > q[2];
bool bfs(int s) {
    bool fl = 0;
    while (!q[s].empty()) {
        int x = q[s].front().first, y = q[s].front().second;
        q[s].pop();
        for (int i = 1; i <= 4; i++) {
            int xx = x + dx[i], yy = y + dy[i];
            if (xx > 0 && xx <= n && yy > 0 && yy <= m && mp[xx][yy] &&
                !vis[xx][yy]) {
                    
                vis[xx][yy] = 1;
                if (mp[x][y] == mp[xx][yy])
                    q[s].push(make_pair(xx, yy));
                else {
                    q[!s].push(make_pair(xx, yy));
                    fl = 1;
                }
            }
        }
    }
    return fl;
}
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            char c;
            cin >> c;
            mp[i][j] = (c == 'R' ? 1 : ((c == 'F') ? 2 : 0)); 
        }
    q[0].push(make_pair(1, 1));
    vis[1][1] = 1;
    /*初始化*/
    for (int i = 0; bfs(i); i = !i, ans++);
    cout << ans + 1;
    return 0;
}
