#include <bits/stdc++.h>
using namespace std;
int n, m, t, sx, sy, fx, fy;
int mp[10][10];
int ans;
int dx[5] = {0, 1, -1, 0, 0};
int dy[5] = {0, 0, 0, 1, -1};
void dfs(int x, int y) {

	if (x == fx && y == fy) {
		ans++;
		return ;
	}
	for (int i = 1; i <= 4; i++) {
		int xx = x + dx[i];
		int yy = y + dy[i];
		if (xx >= 1 && xx <= n && yy >= 1 && yy <= n && mp[xx][yy] != 1) {
			mp[xx][yy] = 1;
			dfs(xx, yy);
			mp[xx][yy] = 0;
		}
	}
}
int main() {

	cin >> n >> m >> t;
	cin >> sx >> sy >> fx >> fy;
	int x, y;
	while (t--) {
		cin >> x >> y;
		mp[x][y] = 1;
	}
	mp[sx][sy] = 1;
	dfs(sx, sy);
	cout<<ans;
	return 0;
}
