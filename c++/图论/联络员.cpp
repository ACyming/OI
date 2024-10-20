#include <bits/stdc++.h>
using namespace std;
long long fa[200050];
int n, m, x, ans, y, k, tot, len;
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
	for (int i = 1; i <= n; i++) fa[i] = i;
	int aa, bb, cc, dd;
	for (int i = 1; i <= m; i++) {
		cin >> aa >> bb >> cc >> dd;
		if (aa == 1) {
			int fau = find(bb);
			int fav = find(cc);
			if (fau != fav) {
				tot++;
				fa[fau] = fav;
			}
			ans += dd;
		} else 
			a[++len]={bb,cc,dd};
	}
	sort(a + 1, a + 1 + len, cmp);
	for (int i = 1; i <= len; i++) {
		int fau = find(a[i].u);
		int fav = find(a[i].v);
		if (fau != fav) {
			tot++;
			fa[fau] = fav;
			ans += a[i].w;
			if (tot == m - 1) {
				break;
			}
		}
	}
	cout << ans;
	return 0;
}
/*
5 6
1 1 2 1
1 2 3 1
1 3 4 1
1 4 1 1
2 2 5 10
2 2 5 5
*/
