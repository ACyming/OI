#include <iostream>
using namespace std;
int head, tail, d[1000][3], ans;
int a[1000][1000];
int dx[5] = {0, 1, 0, -1, 0}, dy[5] = {0, 0, 1, 0, -1};
int xx, yy;
int bfs(int x, int y) {
	head = 0;
	tail = 1;
	d[1][1] = x;
	d[1][2] = y;
	a[x][y] = 1;
	do {
		head++;
		for (int i = 1; i <= 4; i++) {
			xx = d[head][1] + dx[i];
			yy = d[head][2] + dy[i];
			if (xx > 0 && xx <= 10 && yy > 0 && yy <= 10 && a[xx][yy] == 0) {
				tail++;
				d[tail][1] = xx;
				d[tail][2] = yy;
				a[xx][yy] = 1;
			}
		}
	} while (head < tail);
	return tail;
}
int main() {
	for (int i = 1; i <= 10; i++)
		for (int j = 1; j <= 10; j++)
			cin >> a[i][j];
	for (int i = 1; i <= 10; i++)
		for (int j = 1; j <= 10; j++)
			if (a[i][j] == 0) bfs(i, j);
			else break;
	for (int i = 1; i <= 10; i++)
		for (int j = 10; j >= 1; j--)
			if (a[i][j] == 0) bfs(i, j);
			else break;
	for (int i = 1; i <= 10; i++)
		for (int j = 1; j <= 10; j++)
			if (a[i][j] == 0) ans += bfs(i, j);
	cout << ans;

}
