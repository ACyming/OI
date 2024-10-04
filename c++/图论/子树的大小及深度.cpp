#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 20;
int n, r, x, y, k, p;
int pre[N];
int dep[N];
int ch[N];
struct Node {
	int v, next;

} a[N * 2];
void add(int u, int v) {
	a[++k] = {v, pre[u]};
	pre[u] = k;

}
int dfs(int x, int dad) {
	dep[x] = dep[dad] + 1;
	ch[x] = 1;
	for (int i = pre[x]; i; i = a[i].next) {
		int to = a[i].v;
		if (to != dad) {
			ch[x] += dfs(to, x);
		}
	}
	return ch[x];
}
int main() {
	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		scanf("%d%d", &x, &y);
		add(x, y);
		add(y, x);
	}
	dfs(1, 0);
	for (int i = 1; i <= n; i++) printf("%d %d\n", ch[i], dep[i]);
	return 0;
}
