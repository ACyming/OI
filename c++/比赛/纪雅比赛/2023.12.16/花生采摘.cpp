#include <bits/stdc++.h>
using namespace std;
int m, n, i, j, k, t, ans;
struct hs {
	int x, y, t, w;
} p[1000001];
bool cmp(hs aa, hs bb) {
	return aa.w > bb.w;
}
int a[1010][1010];
int main() {
	freopen("peanuts.in","r",stdin);
	freopen("peanuts.out","w",stdout);
	cin >> m >> n >> t;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++) {
			cin >> a[i][j];
			if (a[i][j] > 0) {
				p[++k].w = a[i][j];
				p[k].x = i;
				p[k].y = j;
			}
		}
	sort(p + 1, p + 1 + k, cmp);
	for (i = 1; i <= k; i++) {
		int bs = p[i].x;
		if (i == 1)
			p[i].t = p[i].x + 1;
		else
			p[i].t = p[i - 1].t + abs(p[i].x - p[i - 1].x) + abs(p[i].y - p[i - 1].y) + 1;
		if (p[i].t + bs <= t)
			ans += p[i].w;
	}
	cout << ans;
	return 0;
}
