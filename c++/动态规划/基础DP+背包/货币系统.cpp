#include <bits/stdc++.h>
#pragma GCC optimize(2)
#define int long long
using namespace std;
int dp[35][10003];
int v, n;
int a[30];
int ans;
main() {
//	freopen("money.in","r",stdin);
//	freopen("money.out","w",stdout);
	cin >> n >> v;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	dp[0][0] = 1;
	for (int i = 1; i <= n; i++)
		for (int j = 0; j <= v; j++)
			for (int k = 0; k <= v / a[i] && a[i]*k <= j; k++)
				dp[i][j] += dp[i - 1][j - a[i] * k];
	cout << dp[n][v];
	return 0;
}
