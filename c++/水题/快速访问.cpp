#include <bits/stdc++.h>
using namespace std;
int n, e;
const int N = 120;
int mp[N][N];
int dis[N];
int minn = INT_MAX;
void dfs(int x, int c) {
	dis[x] = c;
	for (int i = 1; i <= n; i++) {
		if (mp[x][i] && dis[x] + 1 < dis[i]) {
			dfs(i, c + 1);
		}
	}
}
int main() {
	scanf("%d%d", &n, &e);
	int x, y;
	for (int i = 1; i <= e; i++) {
		scanf("%d%d", &x, &y);
		mp[x][y] = mp[y][x] = 1;
	}
	for (int i = 1; i <= n; i++) {
		dis[i] = INT_MAX;
	}
	dfs(1, 1);

	if (dis[n] == INT_MAX)
		printf("No Path");
	else
		printf("%d", dis[n]);
	return 0;
}
