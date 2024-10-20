#include <bits/stdc++.h>
using namespace std;
int n, t;
struct Node {
	int x, y;//x:重量，y:价值
} a[99999999];
int dp[9999999];
int ans;
int main() {
//	freopen("beibao1.in", "r", stdin);
//	freopen("beibao1.out", "w", stdout);
	cin >> n >> t;
	for (int i = 1; i <= t; i++) {
		cin >> a[i].x >> a[i].y;
	}
	for (int i = 1; i <= t; i++)
		for (int j = n; j >= a[i].x; j--)
			dp[j] = max(dp[j - a[i].x] + a[i].y, dp[j]);
	cout << dp[n];
	return 0;
}
