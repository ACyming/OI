#include <bits/stdc++.h>
using namespace std;
const int N = 320;
int n, len, s1, s2, e1, e2;
bool vis[2][N][N];
int h[2], t[2], d[2][N][N];
struct Node {
    int x, y;
} q[2][N * N];
int dx[] = {0, 1, 2, 2, 1, -2, -1, -2, -1};
int dy[] = {0, 2, 1, -1, -2, 1, 2, -1, -2};
bool pd(int k) {
    int x = q[k][h[k]].x;
    int y = q[k][h[k]].y;
    for (int i = 1; i <= 8; i++) {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (xx >= 0 && xx < len && yy >= 0 && yy < len && !vis[k][xx][yy]) {
            q[k][++t[k]] = {xx, yy};
            vis[k][xx][yy] = 1;
            d[k][xx][yy] = d[k][x][y] + 1;
            if (vis[!k][xx][yy] == 1) {
                cout << d[k][xx][yy] + d[!k][xx][yy] << endl;
                return 1;
            }
        }
    }
    h[k]++;
    return 0;
}
void dfs() {
    if (s1 == e1 && s2 == e2) {
        cout << 0 << endl;
        return;
    }
    h[0] = h[1] = t[1] = t[0] = 1;
    d[0][s1][s2] = d[1][e1][e2] = 0;
    vis[0][s1][s2] = vis[1][e1][e2] = 1;
    q[0][1] = {s1, s2};
    q[1][1] = {e1, e2};
    while (h[0] <= t[0] && h[1] <= t[1]) {
        if (t[0] - h[0] < t[1] - h[1]) {
            if (pd(0))
                return;
        } else {
            if (pd(1))
                return;
        }
    }
}
int main() {
    cin >> n;
    while (n--) {
        cin >> len >> s1 >> s2 >> e1 >> e2;
        memset(vis, 0, sizeof vis);
        dfs();
    }
    return 0;
}