#include <bits/stdc++.h>
using namespace std;
int n, m, k;
struct Node {
	int u, v, w;
} a[100200];
bool cmp(Node xx, Node yy) {
	return xx.w < yy.w;
}
int fa[1200], s, e;
int father(int x) {
	if (fa[x] != x) fa[x] = father(fa[x]);
	return fa[x];
}
void kl() {
	for (int i = 1; i <= m; i++) {
		int fu = father(a[i].u);
		int fv = father(a[i].v);
		if (fu != fv) {
			fa[fu] = fv;
		}
		if (father(s) == father(e)) {
			cout << a[i].w << endl;
			return;
		}
	}
	cout << -1 << endl;
	return ;
}
int main() {
	cin >> n >> m >> k;
	for (int i = 1; i <= m; i++) {
		cin >> a[i].u >> a[i].v >> a[i].w;
	}
	sort(a + 1, a + 1 + m, cmp);
	for (int i = 1; i <= k; i++) {
		cin >> s >> e;
		for (int j = 1; j <= n; j++)
			fa[j] = j;
		kl();
	}
	return 0;
}
