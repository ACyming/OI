#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int N = 1e5 + 10;
const int d[4][2] = {0, 1, 0, -1, -1, 0, 1, 0};
int n, ans;
char mp[35][35];
bool vis[35][35];
void dfs(int x, int y) {
	if (vis[x][y] == 1)
		return ;
	if (x <= 0 || x > n || y <= 0 || y > n || mp[x][y] == '#') {
		ans++;
		return ;
	}
	vis[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int xx = x + d[i][0];
		int yy = y + d[i][1];
		dfs(xx, yy);
	}
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> mp[i][j];
		}
	}
	dfs(1, 1);
	if (!vis[n][n])
		dfs(n, n);
	cout << 9 * (ans - 4);
	return 0;
}
