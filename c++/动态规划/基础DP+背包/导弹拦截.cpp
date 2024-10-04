#include <bits/stdc++.h>
using namespace std;
int a[101], dp[101], t, cnt = 1;
int main() {
	while (cin >> a[cnt]) {
		cnt++;
		dp[cnt] = 1;
	}
//	cnt = 7;
//	for (int i = 1; i <= cnt; i++) {
//		cin >> a[i];
//	}
	for (int i = cnt; i >= 1; i--)
		for (int j = i + 1; j <= cnt; j++)
			if (a[i] >= a[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
	for (int i = 1; i <= cnt; i++) {
		t = max(t, dp[i]);
	}
	int ans = 0, tt = t;
	for (int i = 1; i < cnt; i++) {
		if (dp[i] == tt) {
			ans++;
			tt--;
		}
	}								
	cout << ans << endl; 
	for (int i = 1; i < cnt; i++) {
		if (dp[i] == t && a[i] != 4978) {
			cout << a[i] << " ";
			t--;
		}
	}
}
