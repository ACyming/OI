#include <bits/stdc++.h>
using namespace std;
int d[100000][10], n, mp[100][100], mp2[100][100], fx, fy;
int dy[5] = {0, 1, -1, 0, 0};
int dx[5] = {0, 0, 0, 1, -1};
void bfs(int x, int y) {
	int head = 0, tail = 1;
	d[1][0] = mp2[1][1];
	d[1][1] = mp2[1][2];
	d[1][2] = mp2[1][3];
	d[1][3] = mp2[2][1];
	d[1][4] = mp2[2][2];
	d[1][5] = mp2[2][3];
	d[1][6] = mp2[3][1];
	d[1][7] = mp2[3][2];
	d[1][8] = mp2[3][3];
	d[1][9] = 0;
	while (head < tail) {
		head++;
		for (int i = 1; i <= 4; i++) {
			int xx = dx[i] + x;
			int yy = dy[i] + y;
			if (xx > 0 && xx <= 3 && yy > 0 && yy <= 3) {
				swap(mp2[x][y], mp2[xx][yy]);
				d[tail][0] = mp2[1][1];
				d[tail][1] = mp2[1][2];
				d[tail][2] = mp2[1][3];
				d[tail][3] = mp2[2][1];
				d[tail][4] = mp2[2][2];
				d[tail][5] = mp2[2][3];
				d[tail][6] = mp2[3][1];
				d[tail][7] = mp2[3][2];
				d[tail][8] = mp2[3][3];
				d[tail][9] = d[tail][9] + 1;
				int pd = 1;
				if (d[tail][0] == mp[1][1] && d[tail][1] == mp[1][2] && d[tail][2] == mp[1][3] && d[tail][3] == mp[2][1] && d[tail][4] == mp[2][2] && d[tail][5] == mp[2][3] && d[tail][6] == mp[3][1] && d[tail][7] == mp[3][2] && d[tail][8] == mp[3][3]) {
					cout << d[tail][9];
					exit(0);
				}

			}
		}

	}
}
int main() {
	for (int i = 1; i <= 3; i++)
		for (int j = 1; j <= 3; j++) {
			cin >> mp[i][j];
		}
	for (int i = 1; i <= 3; i++)
		for (int j = 1; j <= 3; j++) {
			cin >> mp2[i][j];
			if (mp2[i][j] == 0) {
				fx = i;
				fy = j;
			}
		}
	bfs(fx, fy);
	return 0;
}
/**/

