#include <bits/stdc++.h>
using namespace std;
const int N = 110;
const int M = 10010;
struct Node {
	int v, u, w;
	bool operator<(const Node e) const {
		return w < e.w;
	}
} a[M];
int p[N];
int find(int x) {
	if (p[x] != x) p[x] = find(p[x]);
	return p[x];
}
int n, tot, ans;
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++) {
			int w;
			scanf("%d", &w);
			a[tot++] = {i, j, w};
		}
	sort(a, a + tot);
	for (int i = 1; i <= n; i++) p[i] = i;
	for (int i = 1; i <= tot; i++) {
		int f = find(a[i].v), t = find(a[i].u);
		if (f != t) {
			ans += a[i].w;
			p[f] = t;
		}
	}
	printf("%d", ans);
   	return 0;
}
