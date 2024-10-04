#include <bits/stdc++.h>
#define int long long 
using namespace std;
int a[20020], v, n, dp[20020];
main() {
	
	cin >> v >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = v; j >= a[i]; j--) {
			dp[j] = max(dp[j], dp[j - a[i]] + a[i]);
		}
	}
	cout << v - dp[v];
	return 0;
}
//
