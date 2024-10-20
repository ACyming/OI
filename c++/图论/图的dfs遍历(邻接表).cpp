#include <bits/stdc++.h>
using namespace std;
const int N = 11, M = 11;
struct Edge {
	int x, y, next;
} e[M * 2], a[M * 2];
int n, m, head[N], c, vis[N];
void add(int u, int v) {
	c++;
	e[c].x = u;
	e[c].y = v;
	e[c].next = head[u];
	head[u] = c;
}
void dfs(int x) {
	vis[x] = 1;
	cout << x << " ";
	for (int k = head[x]; k != 0; k = e[k].next) {
		int to = e[k].y;
		if (!vis[to]) {
			dfs(to);
		}
	}
}
bool cmp(Edge p, Edge q) {
	return p.x < q.x || p.x == q.x && p.y > q.y;
}
int main() {
	cin >> n >> m;
	int u, v;
	for (int i = 1; i <= m; i++) {
		cin >> u >> v;
		c++;
		a[c].x = u;
		a[c].y = v;
		c++;
		a[c].y = u;
		a[c].x = v;
	}
	sort(a + 1, a + 1 + m * 2, cmp);
	c = 0;
	for (int i = 1; i <= 2 * m; i++) {
		add(a[i].x, a[i].y);
	}

	dfs(1);
	return 0;
}
