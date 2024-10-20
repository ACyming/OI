#include <bits/stdc++.h>
using namespace std;
const int N = 11, M = 11;
int n, m, head[N], c, vis[N];
queue<int> q;
struct Edge {
	int x, y, next;
} e[M * 2], a[M * 2];
void add(int u, int v) {
	c ++;
	e[c].x = u;
	e[c].y = v;
	e[c].next = head[u];
	head[u] = c;
}
void bfs(int x) {
	q.push(x);
	vis[x] = 1;
	cout << x << " ";
	while (q.size() > 0) {
		int hx = q.front();
		q.pop();
		for (int k = head[hx] ; k != 0 ; k = e[k].next) {
			int to = e[k].y;
			if (!vis[to]) {
				cout << to << " ";
				q.push(to);
				vis[to] = 1;
			}
		}
	}

}
bool cmp(Edge p, Edge q) {
	return p.x == q.x && p.y > q.y || p.x < q.x ;
}
int main() {
	cin >> n >> m;
	int i, u, v;
	for (i = 1 ; i <= m ; i ++) {
		cin >> u >> v;
		c ++;
		a[c].x = u;
		a[c].y = v;
		c ++;
		a[c].y = u;
		a[c].x = v;
	}
	sort(a + 1, a + 1 + m * 2, cmp);
	c = 0;
	for (i = 1 ; i <= 2 * m ; i ++) {
		add(a[i].x, a[i].y);
	}
	bfs(1);
	return 0;
}

