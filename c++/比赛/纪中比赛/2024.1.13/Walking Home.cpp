#include <bits/stdc++.h>
using namespace std;
long long ans;
char mp[100][100];
bool vis[100][100];
long long t, n, k;
//L->上一次选择的方向,0向下,1向右
void dfs(long long x, long long y, long long turn, long long L) {
	if ((turn == k && x != n - 1 && y != n - 1)||( turn>k)) 
		return;
	if (x == n - 1 && y == n - 1) {
		ans++;
		return ;
	}
	if (mp[x + 1][y] != 'H' && x != n - 1) {
		if (L == -1)
			dfs(x + 1, y, 0, 1);
		else if (L == 0)
			dfs(x + 1, y, turn + 1, 1);
		else
			dfs(x + 1, y, turn, 1);
	}
	if (mp[x][y + 1] != 'H'&&y != n - 1) {
		if (L == -1)
			dfs(x, y + 1, 0, 0);
		else if (L == 0)
			dfs(x, y + 1, turn, 0);
		else
			dfs(x, y + 1, turn + 1, 0);
	}
}
int main() {
	freopen("c.in","r",stdin);
	freopen("c.out","w",stdout);
	cin >> t;
	while (t--) {
		ans = 0;
		memset(mp, 0, sizeof(mp));
		memset(vis, 0, sizeof(vis));
		cin >> n >> k;
		for (long long i = 0; i < n; i++)
			for (long long j = 0; j < n; j++)
				cin >> mp[i][j];
		vis[0][0] = 1;
		dfs(0, 0, 0, -1);
		cout << ans << endl;
	}
	return 0;
}

