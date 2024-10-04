#include <bits/stdc++.h>
using namespace std;
int n, m;
char mp[600][600];
int sx, sy, ex, ey;
int vis[600][600], d[3600][3];
int dx[5] = {0, 1, -1, 0, 0};
int dy[5] = {0, 0, 0, 1, -1};
void bfs(int x, int y) {
	vis[x][y] = 1;
	int head = 0, tail = 1;
	d[1][0] = x;
	d[1][1] = y;
	d[1][2] = 0;
	while (head < tail) {
		head++;
		char syc = mp[d[head][0]][d[head][1]];
		for (int i = 4; i >= 1; i--) {
			int xx = d[head][0] + dx[i];
			int yy = d[head][1] + dy[i];
			if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && vis[xx][yy] == 0 && mp[xx][yy] == syc) {
				tail++;
				d[tail][0] = xx;
				d[tail][1] = yy;
				if (xx == ex && yy == ey) {
					printf("%d\n", d[tail][2]);
					return ;
				}
				vis[xx][yy] = 1;
			} else if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && vis[xx][yy] == 0 && mp[xx][yy] != syc) {
				tail++;
				d[tail][0] = xx;
				d[tail][1] = yy;
				d[tail][2] = d[head][2] + 1;
				if (xx == ex && yy == ey) {
					printf("%d\n", d[tail][2]);
					return ;
				}
				vis[xx][yy] = 1;
			}
		}
	}
}
int main() {
//	scanf("%d%d", &n, &m);
	n = 99, m = 99;
	for (;;) {
		cin >> n >> m;
		if (n == 0 && m == 0)
			return 0;
		memset(mp, 0, sizeof(mp));
		memset(d, 0, sizeof(d));
		memset(vis, 0, sizeof(vis));
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= m; j++)
				cin >> mp[i][j];
		scanf("%d%d%d%d", &sx, &sy, &ex, &ey);
		sx++, sy++, ex++, ey++;
		bfs(sx, sy);
	}
}
