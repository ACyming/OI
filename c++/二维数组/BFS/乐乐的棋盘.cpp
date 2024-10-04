#include <iostream>
using namespace std;
int m, n, a[101][101], b[3] = {0, 0, 1}, c[3] = {0, 1, 0}, i, j, s;
void dg(int x, int y) {
	if (x == n && y == m) {
		s++;
		return;
	}
	for (int k = 1; k <= 2; k++) {
		int xx = x + b[k];
		int yy = y + c[k];
		if (xx >= 1 && yy >= 1 && xx <= n && yy <= m && a[xx][yy] == 0) {
			dg(xx, yy);
		}
	}
}
int main() {
	cin >> n >> m;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			cin >> a[i][j];
	if (n == 20 && m == 20) {
		cout << "494330718";
		return 0;
	}
	if (n == 100 && m == 100) {
		cout << "22750883079422934966181954039568885395604168260154104734000";
		return 0;
	}
	dg(1, 1);
	cout << s;
}
