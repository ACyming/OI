#include <bits/stdc++.h>
using namespace std;
int n, t[100030], m, a[500030], dp[500030], x[230], y[230];
int ma, nn, ans;
void hs(int x, int y) {
	int _2 = 1;
	while (y) {
		a[++nn] = _2 * x;
		y -= _2;
		_2 = min(_2 * 2, y);
	}
}
int main() {
	//freopen("watch.in", "r", stdin);
	//freopen("watch.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d%d", &x[i], &y[i]);
		hs(x[i], y[i]);
	}
	for (int i = 1; i <= m; i++) {
		scanf("%d", &t[i]);
		ma = max(t[i], ma);
	}
	for (int i = 1; i <= nn; i++)
		for (int j = ma; j >= a[i]; j--)
			dp[j] = max(dp[j], dp[j - a[i]] + a[i]);
	for (int i = 1; i <= m; i++)
		if (dp[t[i]] != t[i]) printf("No\n");
		else printf("Yes\n");
	return 0;
}
