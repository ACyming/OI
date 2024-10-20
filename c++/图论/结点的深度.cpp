#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 20;
int n, r, x, y, k, p;
int pre[N];
int dep[N];
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
			dep[to] = dep[x] + 1;
			dfs(to, x);
		}
	}
}
int main() {
	scanf("%d%d", &n, &r);
	for (int i = 1; i < n; i++) {
		cin >> x >> y;
		add(x, y);
		add(y, x);
	}
	dep[r] = -1;
	dfs(r, 0);
	scanf("%d", &p);
	int z;
	for (int i = 1; i <= p; i++) {
		cin >> z;
		printf("%d\n",dep[z]);
	}
	return 0;
}
