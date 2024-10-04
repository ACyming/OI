#include <bits/stdc++.h>
using namespace std;
int n;
int a[102], d[102][102], f[102], ans;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		f[i] = a[i];
		int t;
		if (getchar() == ' ')
			while (cin >> t) {
				d[i][t] = 1;
				if (getchar() != ' ')
					break;
			}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			if (d[j][i])
				f[i] = max(f[i], f[j] + a[i]);
		}
		ans = max(ans, f[i]);
	}
	cout << ans;
	return 0;
}
