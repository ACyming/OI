#include <bits/stdc++.h>
using namespace std;
const int N = 1000020, M = 1000020;
struct Edge {
	int x, y, next;
} e[M], a[M];
int n, m, head[N], c;
void add(int u, int v) {
	c++;
	e[c].x = u;
	e[c].y = v;
	e[c].next = head[u];
	head[u] = c;
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
	sort(a + 1, a + 1 + m, cmp);
	c = 0;
	for (int i = 1; i <= m; i++) {
		add(a[i].x, a[i].y);
	}
	for (int i = 1; i <= n; i++) {
		if (head[i] > 0) {
			cout << i << endl;
			for (int k = head[i]; k != 0; k = e[k].next) {
				cout << e[k].y << " ";
			}
			cout << endl;
		}
		
	}
	return 0;
}
