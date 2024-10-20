#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10, M = 1e5 + 10;
struct edge {
	int ed, nxt;
} a[M];
int n, m;
int lst[N], c, q[N], ma[N];
bool f[N];
void add(int u, int v) {
	a[++c] = {v, lst[u]};
	lst[u] = c;
}
void bfs(int x) {
	int h = 1, t = 0, hx, tx;
	q[++t] = x;
	f[x] = true;
	while (h <= t) {
		hx = q[h];
		for (int i = lst[hx] ; i > 0 ; i = a[i].nxt) {
			tx = a[i].ed;
			if (!f[tx]) {
				q[++t] = tx;
				f[tx] = true;
			}
		}
		h ++;
	}
	for (int i = 1 ; i <= t ; i ++) {
		ma[q[i]] = x;
	}
}
int main() {
	scanf("%d%d", &n, &m);
	int i, x, y;
	for (i = 1 ; i <= m ; i ++) {
		scanf("%d%d", &x, &y);
		add(y, x);
	}
	for (i = n ; i >= 1 ; i --) {
		if (ma[i] == 0)
			bfs(i);
	}
	for (i = 1 ; i <= n ; i ++) {
		printf("%d ", ma[i]);
	}
	return 0;
}
