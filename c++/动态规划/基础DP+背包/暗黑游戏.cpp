#include <bits/stdc++.h>
using namespace std;
int n, p, r;
struct Node {
	int pg, rune, num, en;
} g[50000];
int dp[5000][5000];
int main() {
	cin >> n >> p >> r;
	for (int i = 1; i <= n; i++)
		cin >> g[i].pg >> g[i].rune >> g[i].num >> g[i].en;
	for (int i = 1; i <= n; i++) {
		if (g[i].num == 0) { // 完全背包
			for (int j = g[i].pg; j <= p; j++) {
				for (int k = g[i].rune; k <= r; k++)
					dp[j][k] = max(dp[j][k], dp[j - g[i].pg][k - g[i].rune] + g[i].en);
			}
		} else { // 多重背包
			for (int j = p; j >= g[i].pg; j--) {
				for (int k = r; k >= g[i].rune; k--) {
					for (int u = 0; u <= g[i].num && g[i].pg * u <= j && g[i].rune * u <= k; u++) {
						dp[j][k] = max(dp[j][k], dp[j - g[i].pg * u][k - g[i].rune * u] + g[i].en * u);
					}
				}
			}
		}
	}
	cout << dp[p][r];
	return 0;
}
