#pragma GCC optimize(2)
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
int f[10000020], g[10000020], a;
int ans = -0x3f3f3f3f;
main() {
	freopen("sequence.in", "r", stdin);
	freopen("sequence.out", "w", stdout);
	scanf("%lld", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a);
		f[i] = max(f[i - 1] + a, a);
		g[i] = min(g[i - 1] + a, a);
		ans = max(max(f[i], abs(g[i])), ans);
	}
	cout << ans;

	return 0;
}
