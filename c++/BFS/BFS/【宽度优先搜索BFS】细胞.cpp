#include <bits/stdc++.h>
using namespace std;
int n, m, bz[1000][1005], xx[4] = {0, 0, 1, -1}, yy[4] = {1, -1, 0, 0};
char mapp[100][100];
void bfs(int x, int y) {
	int head = 0, tail = 1;
	bz[1][0] = x;
	bz[1][1] = y;
	mapp[x][y] = '0';
	while (head < tail) {
		head++;
		for (int i = 0; i <= 3; i++) {
			int dx = bz[head][0] + xx[i];
			int dy = bz[head][1] + yy[i];
			if (mapp[dx][dy] != '0' && dx >= 1 && dx <= n && dy >= 1 && dy <= m) {
				tail++;
				mapp[dx][dy] = '0';
				bz[tail][0] = dx;
				bz[tail][1] = dy;
			}
		}

	}
}
int main() {
	int cnt = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> mapp[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (mapp[i][j] != '0') {
				cnt++;
				bfs(i, j);
			}
		}
	}
	cout << cnt;
}

