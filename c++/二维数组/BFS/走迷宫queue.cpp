#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> PII;
int n, m;
const int N = 520;
char g[N][N];
int d[N][N];
int sx, sy, tx, ty;
int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, 1, -1};
void bfs() {
	queue<PII> q;
	q.push({sx, sy});
	memset(d, -1, sizeof(d));
	d[sx][sy] = 0;
	while (!q.empty()) {
		auto t = q.front();
		q.pop();
		int x = t.first, y = t.second;
		for (int i = 0; i < 4; i++) {
			int xx = x + dx[i], yy = y + dy[i];
			if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && g[xx][yy] != '#' && d[xx][yy] == -1) {
				q.push({xx, yy});
				d[xx][yy] = d[x][y] + 1;
				if (xx == tx && yy == ty) {
					cout << d[tx][ty];
					return ;
				}
			}
		}
	}
	cout << d[tx][ty];
	return;
}
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> g[i][j];
			if (g[i][j] == 's')
				sx = i, sy = j;
			if (g[i][j] == 't')
				tx = i, ty = j;
		}
	}
	bfs();
	return 0;
}

