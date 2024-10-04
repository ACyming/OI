#include <bits/stdc++.h>
using namespace std;
int k, n, m, x, y;
int w[1200], mp[1200][1200], vis[1200], cnt[1200];
void dfs(int x) {
	vis[x] = 1;
	cnt[x]++;
	for (int k = 1; k <= n; k++) {
		if (!vis[k] && mp[x][k] == 1) {
			dfs(k);
		}
	}
}
int main() {
	cin >> k >> n >> m;
	for (int i = 1; i <= k; i++) {
		cin >> w[i];
	}
	for (int i = 1; i <= m; i++) {
		cin >> x >> y;
		mp[x][y] = 1;
	}
	for (int i = 1; i <= k; i++) {
		x = w[i];
		memset(vis, 0, sizeof(vis));
		dfs(x);
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (cnt[i] == k) {
			ans++;
		}

	}
	cout << ans;
	return 0;
}
