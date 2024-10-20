#include <bits/stdc++.h>
using namespace std;
int n, e;
const int N = 120;
int mp[N][N];
int dis[N], vis[N];
void dfs(int x, int c) {
	dis[x] = c;
//	cout << x << endl;
	for (int i = 1; i <= n; i++) {
		if (mp[x][i] > 0 && dis[x] + mp[x][i] > dis[i] && !vis[i]) {
			vis[i] = 1;
			dfs(i, c + mp[x][i]);
		}
	}
}
int main() {
	scanf("%d", &n);
	int x, y, z;
	for (int i = 1; i < n ; i++) {
		scanf("%d%d%d", &x, &y, &z);
		mp[x][y] = mp[y][x] = z + 10;
	}
	for (int i = 1; i <= n; i++) {
		dis[i] = 0;
	}
	vis[1] = 1;
	dfs(1, 1);
	int maxx = 0;
	for (int i = 1; i <= n; i++) {
		maxx = max(maxx, dis[i]);
	}
	printf("%d", maxx);
	return 0;
}
