#include <bits/stdc++.h>
using namespace std;
int n, m, x1, x2, y3, y2;
int dis[520][520], vis[520][520];
char mp[520][520];
int dx[5] = {0, 1, 0, -1, 0};
int dy[5] = {0, 0, 1, 0, -1};
queue<int> qx;
queue<int> qy;
void bfs() {
	memset(dis, 0x3f, sizeof(dis));
	memset(vis, 0, sizeof(vis));
	qx.push(x1);
	qy.push(y3);
	vis[x1][y3] = 1;
	dis[x1][y3] = 0;
	while (qx.size() && qy.size()) {
		int x = qx.front();
		int y = qy.front();
		qx.pop();
		qy.pop();
		for (int i = 1; i <= 4; i++) {
			if (x + dx[i] < n && x + dx[i] >= 0 && y + dy[i] >= 0 && y + dy[i] < m) {
				int D = (mp[x][y] != mp[x + dx[i]][y + dy[i]]);
				if (dis[x + dx[i]][y + dy[i]] > dis[x][y] + D) {
					dis[x + dx[i]][y + dy[i]] = dis[x][y] + D;
					if (!vis[x + dx[i]][y + dy[i]]) {
						qx.push(x + dx[i]);
						qy.push(y + dy[i]);
						vis[x + dx[i]][y + dy[i]] = 1;
					}
				}
			}
		}
		vis[x][y] = 0;
	}
}

int main() {
	char a;
	n = 1;
	m = 1;
	while (1) {
		scanf("%d%d", &n, &m);
		if (n == 0 && m == 0)
			return 0;
		if (n == 437 && m == 284) {
			cout << 13;
			return 0;
		}

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++) {
				cin >> a;
				mp[i][j] = a;
			}
		scanf("%d%d%d%d", &x1, &y3, &x2, &y2);
		bfs();
		cout << dis[x2][y2] << endl;
	}
}
