#include <bits/stdc++.h>
using namespace std;
int n, m;
char mp[1520][1520];
int ans[100020], cnt;
int ans1, ans2;
void dfs(int x, int y) {
	if (mp[x][y] == '.')
		return ;
	mp[x][y] = '.';
	cnt++;
	if (mp[x + 1][y] == '*') dfs(x + 1, y);
	if (mp[x][y + 1] == '*') dfs(x, y + 1);
	if (mp[x - 1][y] == '*') dfs(x - 1, y);
	if (mp[x][y - 1] == '*') dfs(x, y - 1);
	if (mp[x + 1][y + 1] == '*') dfs(x + 1, y + 1);
	if (mp[x - 1][y + 1] == '*') dfs(x - 1, y + 1);
	if (mp[x - 1][y - 1] == '*') dfs(x - 1, y - 1);
	if (mp[x + 1][y - 1] == '*') dfs(x + 1, y - 1);
}
int main() {
	freopen("star.in", "r", stdin);
	freopen("star.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> mp[i][j];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (mp[i][j] == '*') {
				dfs(i, j);
				ans[cnt]++;
				cnt = 0;
			}
	for (int i = 1; i <= 100000; i++) {
		if (ans[i]!=0) {
			ans1++;
			ans2=max(ans2,ans[i]*i);
		}
		
	}
	cout << ans1 << " " << ans2;
	return 0;
}
