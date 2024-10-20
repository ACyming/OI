#include <bits/stdc++.h>
using namespace std;
int d[100000][5], a, b, c, n;
int dx[4] = {0, 0, 0, 0};
int bz[100][100][100];
int num;
int ans[99999];
void bfs() {
	int h = 0, l = 1;
	d[1][1] = 0;
	d[1][2] = 0;
	d[1][3] = c;
	d[1][4] = 0;
	bz[0][0][c] = 1;
	do {
		h++;
		for (int i = 1; i <= 3; i++) {
			for (int j = 1; j <= 3; j++) {
				if (i != j && d[h][i] > 0 && dx[j] - d[h][j] > 0) {
					l++;
					d[l][6 - i - j] = d[h][6 - i - j];
					if (d[h][i] - (dx[j] - d[h][j]) > 0) {
						d[l][i] = d[h][i] - (dx[j] - d[h][j]);
						d[l][j] = dx[j];

					} else {
						d[l][i] = 0;
						d[l][j] = d[h][i] + d[h][j];
					}

					if (bz[d[l][1]][d[l][2]][d[l][3]] == 1) {
						l--;
					} else {
						bz[d[l][1]][d[l][2]][d[l][3]] = 1;
						if (d[l][1] == 0) {
							num++;
							ans[num] = d[l][3];
						}
					}
				}
			}
		}
	} while (h < l);
	ans[num + 1] = c;
	sort(ans + 1, ans + num + 2);
}
int main() {
	cin >> a >> b >> c;
	dx[1] = a;
	dx[2] = b;
	dx[3] = c;
	bfs();
	for (int i = 1; i <= num + 1; i++) {
		cout << ans[i] << " ";
	}
}
