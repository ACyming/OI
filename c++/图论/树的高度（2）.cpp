#include <bits/stdc++.h>
using namespace std;
const int N = 50;
int n, x, y, k, p;
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
	for (int i = pre[x]; i; i = a[i].next) {
		int to = a[i].v;
		if (to != dad) {
			fa[to] = x;
			dep[to] = dep[x] + 1;
			dfs(to, x);
		}
	}
}
int main() {
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		scanf("%d%d", &x, &y);
		add(x, y);
		add(y, x);
	}
	fa[1] = -1;
	dep[1] = 1;
	dfs(1, 0);
	for (int i = 2; i <= n; i++) {
		printf("%d %d %d\n", i, fa[i], dep[i]);
	}
	return 0;
}
