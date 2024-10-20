#include <bits/stdc++.h>
using namespace std;
int n;
struct Node {
	int x, y;
} a[5020];
int dp[5020];
int cmp(Node &xx, Node &yy) {
	return xx.x < yy.x;
}
int ans;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].x >> a[i].y;
	}
	sort(a + 1, a + 1 + n, cmp);
	for (int i = 1; i <= n; i++) dp[i] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			if (a[j].y < a[i].y)
				dp[i] = max(dp[j] + 1, dp[i]);
		}
		ans = max(dp[i], ans);
	}
	cout << ans;
}
