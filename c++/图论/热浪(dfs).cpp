#include <bits/stdc++.h>
using namespace std;
const int N = 6220, M = 6220;
int s, en;
struct Edge {
	int x, y, z, next;
} e[M * 2];
int n, m, head[N], c, dis[N];
void add(int u, int v, int ro) {
	e[++c] = {u, v, ro, head[u]};
	head[u] = c;
}
void dfs(int x, int sum) {
	dis[x] = sum;
//	cout << x << " " << sum << endl;
	for (int k = head[x]; k != 0; k = e[k].next) {
		if (dis[x] + e[k].z < dis[k]) {
			dfs(e[k].y, dis[x] + e[k].z);
		}
	}
}
int main() {
	cin >> n >> m >> s >> en;
	int u, v, ro;
	for (int i = 1; i <= n; i++) {
		dis[i] = 0x3f3f3f3f;
	}
	for (int i = 1; i <= m; i++) {
		cin >> u >> v >> ro;
		add(u, v, ro);
		add(v, u, ro);
	}
	dfs(s, 1);
	if (dis[en] != 0x3f3f3f3f)
		cout << dis[en];
	return 0;
}
