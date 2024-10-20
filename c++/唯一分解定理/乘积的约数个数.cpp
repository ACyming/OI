#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, i = 2;
	scanf("%d", &n);
	int x, cnt = 1;
	for (i = 1; i <= n; i++) {
		cin >> x;
		cnt *= x;
	}
	int ans = 0;
	i = 2;
	while (cnt > 1) {
		if (cnt % i == 0) {
			ans++;
			cnt = cnt / i;
		} else
			i++;
	}
	const int mod = 10e9 + 7;
	cout << ans % mod;
	return 0;
}
