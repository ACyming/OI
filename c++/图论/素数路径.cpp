#include <bits/stdc++.h>
using namespace std;
const int N = 120, M = 120;
struct Edge {
	int x, y, next;
} e[M * 2], a[M * 2];
int n, m, head[N], c, vis[N], maxx;
void add(int u, int v) {
	c++;
	e[c].x = u;
	e[c].y = v;
	e[c].next = head[u];
	head[u] = c;
} 
bool check(int x) {
	if (x < 2)
		return 0;
	for (int i = 2; i <= sqrt(x); i++) {
		if (x % i == 0)
			return 0;
	}
	return 1;
}
void dfs(int x, int c) {
	vis[x] = 1;
	maxx = max(maxx, c);
	for (int k = head[x]; k != 0; k = e[k].next) {
		int to = e[k].y;
		if (!vis[to] && check(to + x)) {
			dfs(to, c + 1);
		}
	}
	vis[x] = 0;
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
	int s;
	cin >> s;
	dfs(s, 1);
	if (maxx == 1)cout << 0;
	else cout << maxx;
	return 0;
}
