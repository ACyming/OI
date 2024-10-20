#include <bits/stdc++.h>
using namespace std;
int n, d[1040400][3];
char mp[1020][1020];
int dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};
int qx, qy, jx, jy;
int bfs(int x, int y) {
	int head = 0, tail = 1;
	d[1][0] = x;
	d[1][1] = y;
	d[1][2] = 0;
	mp[x][y] = '1';
	while (head < tail) {
		head++;
		for (int i = 0; i < 4; i++) {
			int xx = d[head][0] + dx[i];
			int yy = d[head][1] + dy[i];
			if (mp[xx][yy] != '1' && xx >= 1 && xx <= n && yy >= 1 && yy <= n) {
				tail++;
				mp[xx][yy] = '1';
				d[tail][0] = xx;
				d[tail][1] = yy;
				d[tail][2] = d[head][2] + 1;
			}
			if (xx == jx && yy == jy) {
				return d[tail][2];
			}
		}
	}
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> mp[i][j];
		}
	}
	cin >> qx >> qy >> jx >> jy;
	cout << bfs(qx, qy);
	return 0;
}
