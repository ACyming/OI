#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e3 + 100;
ll n, m, q, a[N][N], b[N][N];
int main() {
	ll i, j, x1, y1, x2, y2, v;
	scanf("%lld%lld%lld", &n, &m, &q);
	for (i = 1 ; i <= n ; i ++) {
		for (j = 1 ; j <= m ; j ++) {
			scanf("%lld", &a[i][j]);
			b[i][j] = a[i][j] - a[i][j - 1];
		}
	}
	while (q --) {
		scanf("%lld%lld%lld%lld%lld", &x1, &y1, &x2, &y2, &v);
		for (i = x1 ; i <= x2 ; i ++) {
			b[i][y1] += v;
			b[i][y2 + 1] -= v;
		}
	}
	for (i = 1 ; i <= n ; i ++) {
		for (j = 1 ; j <= m ; j ++) {
			a[i][j] = a[i][j - 1] + b[i][j];
			printf("%lld ", a[i][j]);
		}
		puts("");
	}
	return 0;
}
