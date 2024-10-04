#include <bits/stdc++.h>
using namespace std;
int n, s;
int a[1200], cnt1, cnt2;
int ans;
void dfs(int x) {
	if (x > n * 2) {
		cnt1 = cnt2 = 0;
		for (int i = 1; i <= n; i++) {
			cnt1 += a[i];
		}
		for (int i = n + 1; i <= n * 2; i++) {
			cnt2 += a[i];
		}
		if (cnt1 == cnt2 && cnt1 + cnt2 == s) {
			ans++;
			for (int i =  1; i <= n * 2; i++) {
				cout << a[i];
			}
			cout << endl;
		}
		return;
	}
	for (int i = 0; i <= n * 2; i++) {
		a[x] = i;
		dfs(x + 1);
	}
}
int main() {
	cin >> n >> s;
	dfs(1);
	cout << ans;
	return 0;
}
