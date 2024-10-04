#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1020;
int t, n, h, r;
int x[N], y[N], z[N], fa[N];
int find(int x) {
	if (x != fa[x]) fa[x] = find(fa[x]);
	return fa[x];
}
double dist(int x1, int x2, int y1, int y2, int z1, int z2) {
	return (double)sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) + (z1 - z2) * (z1 - z2));
}
main() {
	
	freopen("cheese.in", "r", stdin);
	freopen("cheese.out", "w", stdout);
	cin >> t;
	while (t--) {
		cin >> n >> h >> r;
		memset(fa, 0, sizeof fa);
		memset(x, 0, sizeof x);
		memset(y, 0, sizeof y);
		memset(z, 0, sizeof z);
		for (int i = 0; i <= n + 1; i++) fa[i] = i;
		for (int i = 1; i <= n; i++) {
			cin >> x[i] >> y[i] >> z[i];
			if (z[i] - r <= 0 && find(0) != find(i))
				fa[find(i)] = find(0);
			if (z[i] + r >= h && find(n + 1) != find(i))
				fa[find(i)] = find(n + 1);
			for (int j = 1; j < i; j++) {
				if (dist(x[i], x[j], y[i], y[j], z[i], z[j]) <= 2 * r) {
					if (find(i) != find(j)) {
						fa[find(i)] = find(j);
					}
				}
			}
		}
		if (find(0) == find(n + 1)) cout << "Yes" << "\n";
		else cout << "No" << "\n";
	}
	return 0;
}