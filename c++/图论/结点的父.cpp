#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 20;
int n, r, x, y, k;
int pre[N];
int fa[N];
struct Node {
	int v, next;

} a[N * 2];
void add(int u, int v) {
	a[++k] = {v, pre[u]};
	pre[u] = k;

}
// dad是x的父亲
void dfs(int x, int dad) {
	for (int i = pre[x]; i; i = a[i].next) {
		int to = a[i].v;
		if (to != dad) {
			fa[to] = x;
			dfs(to, x);
		}
	}
}
int main() {
	cin >> n >> r;
	for (int i = 1; i < n; i++) {
		cin >> x >> y;
		add(x, y);
		add(y, x);
	}
	fa[r] = -1;
	dfs(r, 0);
	for (int i = 1; i <= n; i++) {
		if (fa[i] != -1)
			cout << fa[i] << " ";
	}
	return 0;
}
