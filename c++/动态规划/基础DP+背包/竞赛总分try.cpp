#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, t;
struct Node {
	int x, y;
} a[99999999];
int dp[9999999];
int ans;
main() {
	cin >> n >> t;
	for (int i = 1; i <= t; i++) {
		cin >> a[i].y >> a[i].x;
	}
	for (int i = 1; i <= t; i++)
		for (int j = a[i].x; j <= n; j++)
			dp[j] = max(dp[j - a[i].x] + a[i].y, dp[j]);
	cout << dp[n];
	return 0;
}
