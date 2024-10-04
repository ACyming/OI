#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 20;
int n, r, x, y, k, p;
int pre[N];
int dep[N];
int fa[N];
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
	for (int i = pre[x]; i; i = a[i].next) {
		int to = a[i].v;
		if (to != dad) {
			dfs(to, x);
		}
	}
}
int main() {
	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		scanf("%d%d", &x, &y);
		add(x, y);
		add(y, x);
	}
	dfs(1, 0);
	int ma = 1;
	for (int i = 2; i <= n; i++) {
		if (dep[ma] < dep[i])
			ma = i;
	}
	dfs(ma, 0);
	ma = 1;
	for (int i = 2; i <= n; i++) {
		if (dep[ma] < dep[i]) {
			ma = i;

		}
	}
	int d = dep[ma];
	if (d % 2 == 0) {
		for (int i = 1; i <= d / 2 - 1; i++) {
			ma = fa[ma];
		}
		if (ma < fa[ma]) printf("%d %d", ma, fa[ma]);
		else printf("%d %d", fa[ma], ma);
	} else {
		for (int i = 1; i <= d / 2; i++) {
			ma = fa[ma];
		}
		printf("%d", ma);
	}
	return 0;
}
