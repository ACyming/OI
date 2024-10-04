#include <bits/stdc++.h>
using namespace std;
const int N = 110, INF = 0x3f3f3f3f;
int d[N][N];
int n, m, x, y, l;
int main() {
	cin >> n >> m;
	memset(d, 0x3f, sizeof(d));
	for (int i = 1; i <= n; i++) {
		d[i][i] = 0;
	}
	for (int i = 1; i <= m; i++) {
		cin >> x >> y >> l;
		d[x][y] = l;
	}
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (d[i][j] > d[i][k] + d[k][j] && d[i][k] != INF && d[k][j] != INF) {
					d[i][j] = d[i][k] + d[k][j];
				}
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (d[i][j] != INF)
				cout << d[i][j] << " ";
			else
				cout << "N" << " ";
		}
		cout << endl;
	}
	return 0;
}
