#include <bits/stdc++.h>
using namespace std;
int n, s;
int g[60][60], dis[60];
void dfs(int x, int sum) {
	dis[x] = sum;
	for (int k = 1; k <= n; k++) {
		if (g[x][k] != 0 && dis[x] + g[x][k] < dis[k]) {
			dfs(k, dis[x] + g[x][k]);
		}
	}
}
int main() {
	cin >> n >> s;
	for (int i = 1; i <= n; i++) {
		dis[i] = INT_MAX;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> g[i][j];
		}
	}
	dfs(s, 0);
	for (int i = 1; i <= n; i++) {
		if (i != s )
			if (dis[i] != INT_MAX)
				cout << dis[i] << " ";
			else
				cout << -1 << " ";
	}
	return 0;
}
