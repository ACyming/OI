#include <bits/stdc++.h>
#define inf 0x3f3f3f3f
using namespace std;

const int N = 1200;
int n, m;
int g[N][N], dis[N], ans, vis[N];
void dfs(int x, int sum) {
	dis[x] = sum;
	for (int k = 1; k <= n; k++) {
		if (g[x][k] > 0 && dis[x] + g[x][k] < dis[k]) {

			dfs(k, dis[x] + g[x][k]);
		}
	}
}
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
	dfs(1, 0);
	int maxx=INT_MIN;
	for (int i = 1; i <= n; i++) {
		if (dis[i] == inf) {
			cout << -1;
			return 0;
		} else {
			maxx=max(maxx,dis[i]);
		}
	}
	cout<<maxx;
	return 0;
}
