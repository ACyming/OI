#include <bits/stdc++.h>
using namespace std;
int n, t;
struct Node {
	int x, y, z; //x:重量，y:价值
} a[2020];
int dp[2020][520];
int ans;
int main() {
	cin >> t >> n;
	for (int i = 1; i <= t; i++) {
		cin >> a[i].z >> a[i].x >> a[i].y;
	}
	for (int i = 1; i <= t; i++)
		for (int j = 1; j <= n; j++)
			for (int k = 0; k <= a[i].z && k * a[i].x <= j; k++) {
				dp[i][j] = max(dp[i][j], dp[i - 1][j - k * a[i].x] + k * a[i].y);
			}
	cout << dp[t][n];
	return 0;
}
