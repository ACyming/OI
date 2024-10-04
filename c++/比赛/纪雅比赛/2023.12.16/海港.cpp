#include <bits/stdc++.h>
using namespace std;
int bk[99999];
int a[999999];
int main() {
	int n, maxn = -9999, minn = 9999, t, k;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int ans = 0;
		cin >> t >> k;
		for (int j = 1; j <= k; j++) {
			cin >> a[i];
			++bk[a[i]];
			maxn = max(maxn, a[i]);
			minn = min(minn, a[i]);
		}
		for (int j = minn; j <= maxn; j++)
			if (bk[j] > 0)
				++ans;
		cout << ans << endl;
	}
	return 0;
}
