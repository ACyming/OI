#include <bits/stdc++.h>
using namespace std;
long  n, m;
long  c[1500], p[1500], w[1500][1500], f[1500][1500], g[1500][1500];
long  vis[1500], cnt;
void dg(int x, int y) {
	if (x == 0) return;
	dg(x - 1, y - g[x][y]*c[x]);
	cout << g[x][y] << endl;
}

int main() {
	cin >> n >> m;
	register long  i, j, k;
	for (i = 1; i <= n; i++) {
		cin >> c[i] >> p[i];
		for (j = 1; j <= p[i]; j++)
			cin >> w[i][j];
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			for (k = 0; k <= p[i] && k * c[i] <= j; k++) {
				if (f[i][j] < f[i - 1][j - k * c[i]] + w[i][k]) {
					f[i][j] = f[i - 1][j - k * c[i]] + w[i][k];
					g[i][j] = k;
				}
			}
		}
	}
	int maxx = INT_MIN;
	int mm;
	for (int i = 0; i <= m; i++)
		if (maxx < f[n][i]) maxx = f[n][i], mm = i;
	cout << maxx << endl;
	dg(n, mm);
	return 0;
}
