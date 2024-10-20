#include <bits/stdc++.h>
#define inf 0x3f3f3f3f
using namespace std;
const int N = 12500;
int g[N][N], n, m, dis[N], vis[N], pre[N];
int main() {
	int x, y, k;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		dis[i] = inf;
	}
	for (int i = 1; i <= m; i++) {
		cin >> x >> y >> k;
		g[x][y] = g[y][x] = k;
	}
	dis[1] = 0;
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
	int maxx = INT_MIN;
	for (int i = 1; i <= n; i++) {
		if (dis[i] == inf) {
			cout << -1;
			return 0;
		} else {
			maxx = max(maxx, dis[i]);
		}
	}
	cout << maxx;
	return 0;
}
