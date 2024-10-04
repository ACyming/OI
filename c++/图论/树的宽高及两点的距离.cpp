#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 20;
int n, r, x, y, k, ex, ey;
int pre[N];
int dep[N];
int fa[N];
bool v[N];
int wid[N];
int maxd, maxw;
struct Node {
	int v, next;

} a[N * 2];
void add(int u, int v) {
	a[++k] = {v, pre[u]};
	pre[u] = k;

}
void dfs(int x, int dad) {
	dep[x] = dep[dad] + 1;
	fa[x] = dad;
	wid[dep[x]]++;
	maxd = max(maxd, dep[x]);
	maxw = max(maxw, wid[dep[x]]);
	for (int i = pre[x]; i; i = a[i].next) {
		int to = a[i].v;
		if (to != dad) {
			dfs(to, x);
		}
	}
}
int main() {
	scanf("%d%d%d", &n, &ex, &ey);

	for (int i = 1; i < n; i++) {
		scanf("%d%d", &x, &y);
		add(x, y);
		add(y, x);
	}
	dfs(1, 0);
	//把ex的所有祖先标记为true
	v[ex] = 1;
	while (fa[ex]) {
		ex = fa[ex];
		v[ex] = 1;

	}
	//找到第一个被标记为true的点
	while (!v[ey]) {
		ey = fa[ey];
	}
	printf("%d", ey);

	return 0;
}
