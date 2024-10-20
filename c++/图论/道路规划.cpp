#include <bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;
int n, q;
int tot, ans;
struct node {
	int x, y, w;
} a[150000];
int k;
int f[150000];
int find(int x) {
	if (x == f[x])	return x;
	else return f[x] = find(f[x]);
}
void hb(int x, int y) {
	int fx = find(x);
	int fy = find(y);
	if (fx != fy) {
		f[fx] = fy;
	}
}
int cmp(node xx, node yy) {
	return xx.w < yy.w;
}
int main() {
	int x, y;
	cin >> n;
	for (int i = 0; i < n; i++)
		f[i] = i;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++) {
			cin >> x;
			if (i < j)
				a[++k] = {i, j, x};
		}
	cin >> q;
	while (q--) {
		cin >> x >> y;
		hb(x, y);
	}
	sort(a + 1, a + 1 + k, cmp);
	for (int i = 1; i <=k; i++) {
		int fa = find(a[i].x);
		int fb = find(a[i].y);
		if (fa != fb) {
			hb(fa, fb);
			tot++;
			ans += a[i].w;
		}
		if (tot == n - 1)
			break;
	}
	cout << ans;
	return 0;
}
