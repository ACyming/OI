#include <bits/stdc++.h>
using namespace std;
int n, m;
int vis[1000][1000], dx[5] = {0, 0, -1, 1}, dy[5] = {1, -1, 0, 0}, d[10000000][3];
void bfs(int x, int y) {
	int head = 0, tail = 1;
	d[1][0] = x;
	d[1][1] = y;
	d[1][2] = 0;
	while (head < tail) {
		head++;
		for (int i = 0; i < 4; i++) {
			int xx = d[head][0] + dx[i];
			int yy = d[head][1] + dy[i];
			if (vis[xx][yy] != 1 && xx >= 1 && xx <= n && yy >= 1 && yy <= m) {
				tail++;
				d[tail][0] = xx;
				d[tail][1] = yy;
				d[tail][2] = d[head][2] + 1;
				vis[xx][yy] = 1;
			}
		}
	}
}
int main() {
	cin >> m >> n;
	bfs(1, n);
	return 0;
}
