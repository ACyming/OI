#include <bits/stdc++.h>
#define int signed long long
using namespace std;
const int N = 1e18;
int n, m;
int fa[1020];
int ans = 1;
int find(int x) {
	return x != fa[x] ?  fa[x] = find(fa[x]) :  x;
}
void hb(int x, int  y) {
	int fx = find(x);
	int fy = find(y);
	if (fx != fy) {
		ans *= 2;
		ans %= N;
		fa[fx] = fy;
	}
}
main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) fa[i] = i;
	int x, y;
	for (int i = 1; i <= m; i++) {
		cin >> x >> y;
		hb(x, y);
	}
//	if (ans > N) ans %= N;
	cout << ans;
	return 0;
}
