#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 20;
int n, m, w, cnt, fa[N], ans, tot, minn = 0x3f3f3f3f;
struct node {
	int u, v, c;
} a[N];
int find(int x) {
	if (x == fa[x]) {
		return x;
	}
	return fa[x] = find(fa[x]);
}
bool cmp(node aa, node bb) {
	return aa.c < bb.c;
}
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		fa[i] = i;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &m);
			cnt++;
			a[cnt].u = i;
			a[cnt].v = j;
			a[cnt].c = m;
		}
	}
	for (int i = 1; i <= n; i++) {
		a[++cnt].u = i;
		a[cnt].v = n + 1;
		
		scanf("%d", &a[cnt].c);
	}
	sort(a + 1, a + 1 + cnt, cmp);
	for (int i = 1; i <= cnt; i++) {
		int fau = find(a[i].u);
		int fav = find(a[i].v);
		if (fau != fav) {
			tot++;
			ans += a[i].c;
			fa[fau] = fav;
		}
		if (tot == cnt - 1)	break;
	}
	printf("%d", ans);
	return 0;
}
