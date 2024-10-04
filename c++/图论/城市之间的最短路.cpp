#include <bits/stdc++.h>
using namespace std;
const int N = 12;
int g[N][N], n, m, dis[N];
void dfs(int x, int sum) {
	dis[x] = sum;
	for (int k = 1; k <= n; k++) {
		if (g[x][k] != 0 && dis[x] + g[x][k] < dis[k]) {
			dfs(k, dis[x] + g[x][k]);
		}
	}
}
int main() {
	cin >> n >> m;
	int x, y, z, s, e;
	for (int i = 1; i <= n; i++) {
		dis[i] = INT_MAX;
	}
	for (int i = 1; i <= m; i++) {
		cin >> x >> y >> z;
		g[x][y] = g[y][x] = z;
	}
	cin >> s >> e;
	dfs(s, 0);
	if (dis[e] != INT_MAX) {
		cout << dis[e];
	} else {
		cout << "No path";
	}
	return 0;
}
