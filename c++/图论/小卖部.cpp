#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 20;
int n, r, x, y, k, p, maxx;
int pre[N];
int dep[N];
int ans[N];
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
			dep[to] = dep[x] + 1;
			dfs(to, x);
		}
	}
}
int main() {
	scanf("%d%d", &n, &r);
	for (int i = 1; i < n; i++) {
		scanf("%d%d", &x, &y);
		add(x, y);
		add(y, x);
	}
	dep[r] = 1;
	dfs(r, 0);
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		maxx = max(maxx, dep[i]);
	}
	printf("%d\n", maxx);
	for (int i = 1; i <= n; i++) {
		if (dep[i] == maxx) ans[++cnt] = i;

	}
	for (int i = 1; i <= cnt; i++)
		printf("%d ", ans[i]);
	return 0;
}
