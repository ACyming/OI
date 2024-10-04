#include <bits/stdc++.h>
using namespace std;
int n, d, k, a[1001], b[1001][16];
int bz[1001], ans;
void dfs(int x, int y) {
	if (x == k + 1) {
		int ncnt = 0;
		for (int i = 1; i <= n; i++) {
			int bcnt = 0;
			for (int j = 1; j <= a[i]; j++) {
				if (bz[b[i][j]] == 1) {
					bcnt++;
				}
			}
			if (bcnt == a[i]) {
				ncnt++;
			}
		}
		ans = max(ans, ncnt);
		return;
	} else {
		for (int i = y; i <= d; i++) {
			bz[i] = 1;
			dfs(x + 1, i + 1);
			bz[i] = 0;
		}
	}
}
int main() {
	cin >> n >> d >> k;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		for (int j = 1; j <= a[i]; j++) {
			cin >> b[i][j];
		}
	}
	dfs(1, 1);
	cout << ans;
}
