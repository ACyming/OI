#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, ans = INT_MAX;
int a[2 * (int)1e5 + 10];
main() {
#ifdef ONLINE_JUDGE
	freopen("bus.in", "r", stdin);
	freopen("bus.out", "w", stdout);
#endif
	cin >> n;
	a[0] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		a[i] = a[i] + a[i - 1];
		ans = min(ans, a[i]);
	}
	if (ans < 0) cout << abs(ans) + a[n];
	else cout << a[n];
	return 0;
}
