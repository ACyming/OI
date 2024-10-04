#include <bits/stdc++.h>
using namespace std;
int n, t;
struct Node {
	int x, y;
} a[120];
int dp[20020];
int ans;
int main() {
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
