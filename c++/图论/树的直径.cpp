#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 20;
/*
  假设从任意的点是树根，找出离他最远的点
  这个点一定是直径的某个端点a
  假设a是数根，求离a最远的点b
  b就是直径的另一个端点了

 */
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
void dfs(int x, int dad) {
	dep[x] = dep[dad] + 1;
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
	//假设1是根节点，找理他最远的点
	dfs(1, 0);
	int ma = 1;
	for (int i = 2; i <= n; i++) {
		if (dep[ma] < dep[i])
			ma = i;
	}
	//ma一定是某条直径的端点
	//假设ma是根节点，求出每个结点到他 的深度
	dfs(ma, 0);
	ma = 1;
	for (int i = 2; i <= n; i++) {
		if (dep[ma] < dep[i])
			ma = i;
	}
	cout << dep[ma] - 1;
	return 0;
}
