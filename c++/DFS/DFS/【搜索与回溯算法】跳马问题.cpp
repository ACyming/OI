#include <bits/stdc++.h>
using namespace std;
int dx[9] = {0, -2, -2, -1, 1, 2, 2, -1, 1};
int dy[9] = {0, -1, 1, 2, 2, -1, 1, -2, -2};
int mapp[9][9];
int cnt2;
void dfs(int x, int y, int cnt) {
	if (cnt == 25) {
		++cnt2;
		return;
	}
	for (int i = 1; i <= 8; i++) {
		int xx = x + dx[i];
		int yy = y + dy[i];
		if (xx > 0 && xx < 6 && yy > 0 && yy < 6 && mapp[xx][yy] == 0) {
			mapp[xx][yy] = 1;
			dfs(xx, yy, cnt + 1);
			mapp[xx][yy] = 0;
		}
	}
}
int main() {
	int x, y;
	cin >> x >> y;
	mapp[x][y] = 1;
	dfs(x, y, 1);
	cout << cnt2;
	return 0;
}
