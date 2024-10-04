#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, k, h;
int sx, sy, ex, ey;
char mp[120][120];
int mapp[120][120];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int d[10000000][5];
int t[300];
int ans[220][220];
void bfs(int x, int y) {
	int tail = 1, head = 0;
	d[1][0] = x;
	d[1][1] = y;
	d[1][2] = h;
	while (head < tail) {
		head++;
		for (int i = 0; i < 4; i++) {
			int xx = d[head][0] + dx[i];
			int yy = d[head][1] + dy[i];
			if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && mp[xx][yy] != '#') {
				tail++;
				d[tail][0] = xx;
				d[tail][1] = yy;
				d[tail][2] = d[head][2] - t[mp[xx][yy]];
				if (d[tail][2] <= 0 || d[tail][2] <= ans[xx][yy]) {
					tail--;
					continue;
				}
			}
			ans[xx][yy] = d[tail][2];
		}
	}

}
main() {
	freopen("trap.in", "r", stdin);
	freopen("trap.out", "w", stdout);
	scanf("%lld%lld%lld%lld", &n, &m, &k, &h);
	scanf("%lld%lld%lld%lld", &sx, &sy, &ex, &ey);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> mp[i][j];
			if (mp[i][j] >= 'A' && mp[i][j] <= 'Z')
				t[mp[i][j]] = 1;
		}
	}
	for (int i = 'A'; i <= 'Z'; i++) {
		if (t[i]) cin >> t[i];
	}
	bfs(sx, sy);
	if (ans[ex][ey] > 0)
		cout << ans[ex][ey];
	else
		cout << -1;
	return 0;
}
