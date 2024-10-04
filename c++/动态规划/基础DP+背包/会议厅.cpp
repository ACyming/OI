#include <bits/stdc++.h>
using namespace std;
int n;
struct Node {
	int x, y;
} a[1000000];
int dp[1000000];
int cmp(Node &xx, Node &yy) {
	return xx.x < yy.x;
}
int ans;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i].x >> a[i].y;
	sort(a + 1, a + 1 + n, cmp);
	for (int i = 1; i <= n; i++) {
		dp[i] = a[i].y - a[i].x;
		for (int j = 1; j < i; j++) {
			if (a[j].y <= a[i].x)
				dp[i] = max(a[i].y - a[i].x + dp[j], dp[i]);
		}
		ans = max(dp[i], ans);
	}
	cout << ans;
	return 0;
}
