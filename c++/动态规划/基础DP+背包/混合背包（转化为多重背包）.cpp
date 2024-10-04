#include <bits/stdc++.h>
using namespace std;
#define M 205
#define N 35
int dp[M], w[N], c[N], p[N];
int main() {
	int n, m;
	cin >> m >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> w[i] >> c[i] >> p[i];
		if (p[i] == 0) //如果第i物品可以取无限个，实际最多可以取m/w[i]个
			p[i] = m / w[i];
	}
	for (int i = 1; i <= n; ++i) //多重背包
		for (int j = m; j >= w[i]; --j)
			for (int k = 0; k * w[i] <= j && k <= p[i]; ++k)
				dp[j] = max(dp[j], dp[j - k * w[i]] + k * c[i]);
	cout << dp[m];
	return 0;
}

