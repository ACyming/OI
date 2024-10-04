#include <bits/stdc++.h>
using namespace std;
int n, t, v, sum;
struct Node {
	int x, y, z; //x:重量，y:价值
} a[2050];
int dp[2025][2025];
int ans;
int main() {
	cin >> n >> v >> t;
	for (int i = 1; i <= t; i++) {
		cin >> a[i].y >> a[i].x >> a[i].z;
	}
	for (int i = 1; i <= t; i++)
		for (int j = n; j >= a[i].x; j--)
			for (int k = v; k >= a[i].z ; k--)
				dp[j][k] = max(dp[j - a[i].x][k - a[i].z] + a[i].y, dp[j][k]);
	cout << dp[n][v];
	return 0;
}
