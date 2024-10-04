#include <bits/stdc++.h>
using namespace std;
const int N = 12;
int g[N][N], n, m, dis[N], vis[N], pre[N];
int main() {
	cin >> n >> m;
	int x, y, z, s, e;
	for (int i = 1; i <= n; i++) {
		dis[i] = 0x3f3f3f3f;
	}
	for (int i = 1; i <= m; i++) {
		cin >> x >> y >> z;
		g[x][y] = g[y][x] = z;
	}
	cin >> s >> e;
	dis[s] = 0;
	for (int i = 1; i <= n; i++) {
		int mi = -1;
		for (int j = 1; j <= n; j++) {
			if (!vis[j] && (mi == -1 || dis[mi] > dis[j]))
				mi = j ;
		}
		vis[mi] = 1;
		for (int j = 1; j <= n; j++) {
			if (!vis[j] && g[mi][j] != 0 && dis[j] > dis[mi] + g[mi][j]) {
				dis[j] = dis[mi] + g[mi][j];
				pre[j] = mi;
			}
		}
	}
	if (dis[e] != 0x3f3f3f3f) {
		cout << dis[e];
	} else {
		cout << "No path";
	}
	return 0;
}
