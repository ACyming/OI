#include <bits/stdc++.h>
using namespace std;
const int N = 10e5 + 20, M = 10e5 + 20;
struct Edge {
	int x, y, next;
} e[M], a[M];
int n, m, head[N], c, maxx, omaxx;
void add(int u, int v) {
	c++;
	e[c].x = u;
	e[c].y = v;
	e[c].next = head[u];
	head[u] = c;
}
bool fff = 0;
void dfs(int x) {
	int to = 0 ;
//	cout<<x<<" ";
	if (omaxx == maxx) {
		fff = 1;
		return ;
	}
	if (fff) {
		return ;
	}
	omaxx = maxx;
	for (int k = head[x]; k != 0; k = e[k].next) {
		to = e[k].y;
		maxx = max(maxx, to);
	}
	dfs(maxx);
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
	}
	c = 0;
	for (int i = 1; i <= m; i++) {
		add(a[i].x, a[i].y);
	}
	for (int i = 1; i <= n; i++) {
		maxx = 0;
		fff = 0;
		omaxx = 0;
		maxx = max(maxx, i);
		dfs(i);
		cout << maxx << " ";
	}

	return 0;
}
