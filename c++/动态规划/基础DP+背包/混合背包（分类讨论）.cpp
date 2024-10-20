#include <bits/stdc++.h>
using namespace std;
#define M 205
#define N 35
int dp[M], w[N], c[N], p[N];
int main() {
	int n, m;
	cin >> m >> n;
	for (int i = 1; i <= n; ++i)
		cin >> w[i] >> c[i] >> p[i];
	for (int i = 1; i <= n; ++i) {
		if (p[i] == 1) { //01背包
			for (int j = m; j >= w[i]; j--)
				dp[j] = max(dp[j], dp[j - w[i]] + c[i]);
		} else if (p[i] == 0) { //完全背包
			for (int j = w[i]; j <= m; ++j)
				dp[j] = max(dp[j], dp[j - w[i]] + c[i]);
		} else { //多重背包
			for (int j = m; j >= w[i]; --j)
				for (int k = 0; k * w[i] <= j && k <= p[i]; ++k)
					dp[j] = max(dp[j], dp[j - k * w[i]] + k * c[i]);
		}
	}
	cout << dp[m];
	return 0;
}

