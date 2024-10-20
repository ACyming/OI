#include <bits/stdc++.h>
using namespace std;
long long fa[200050];
int n, m, x, ans, y, k;
int find(int x) {
	if (x == fa[x]) {
		return x;
	}
	return fa[x] = find(fa[x]);
}
struct node {
	int u, v, w;
} a[9999999];
bool cmp(node aa, node bb) {
	return aa.w < bb.w;
}
int main() {
	
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		cin >> a[i].u >> a[i].v >> a[i].w;
	}
	for (int i = 1; i <= n; i++) fa[i] = i;
	int tot = 0;
	sort(a + 1, a + 1 + m, cmp);
	for (int i = 1; i <= m; i++) {
		int fau = find(a[i].u);
		int fav = find(a[i].v);
		if (fau != fav) {
			tot++;
			fa[fau] = fav;
			ans = max(ans, a[i].w);
			if (tot == n - 1) {
				break;
			}
		}
	}
	cout << n - 1 << " " << ans;
	return 0;
}

