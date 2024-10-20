#include <bits/stdc++.h>
#define ans dep[ma] * 10 + (1 + dep[ma])*dep[ma] / 2
using namespace std;
const int N = 1e5 + 20;
int n, r, x, y, z, k, p;
int pre[N];
int dep[N];
struct Node {
	int v, next, l ;

} a[N * 2];
void add(int u, int v, int len) {
	a[++k] = {v, pre[u], len};
	pre[u] = k;

}
void dfs(int x, int dad) {
	//你不确定下一个结点是谁
	//那你就没法确定下一个结点的距离
//	dep[x] = dep[dad] + 1;//每个结点的深度
	for (int i = pre[x]; i; i = a[i].next) {
		int to = a[i].v;
		if (to != dad) {
			dep[to] = dep[x] + a[i].l;
			dfs(to, x);
		}
	}
}
int main() {
	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		scanf("%d%d%d", &x, &y, &z);
		add(x, y, z);
		add(y, x, z);
	}
	dfs(1, 0);
	int ma = 1;
	for (int i = 2; i <= n; i++) {
		if (dep[ma] < dep[i])
			ma = i;
	}
	memset(dep, 0, sizeof(dep));
	dfs(ma, 0);
	ma = 1;
	for (int i = 2; i <= n; i++) {
		if (dep[ma] < dep[i])
			ma = i;
	}
	cout << ans;
	return 0;
}
