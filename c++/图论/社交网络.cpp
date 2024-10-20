#include <bits/stdc++.h>
using namespace std;
int n, m;
double g[120][120], cnt[120][120], ans;
void floyd() {
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (g[i][k] + g[k][j] == g[i][j]) cnt[i][j] += cnt[i][k] * cnt[k][j];
				else if (g[i][k] + g[k][j] < g[i][j]) {
					g[i][j] = g[i][k] + g[k][j]; 	
					cnt[i][j] = cnt[i][k] * cnt[k][j];
				}
			}
		}
	}
}
int main() {
//	freopen("test", "w", stdout);
	cin >> n >> m;
	int x, y, z;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			g[i][j] = g[j][i] = 0x3f3f3f3f;
	for (int i = 1; i <= m; i++) {
		cin >> x >> y >> z;
		g[x][y] = g[y][x] = z;
		cnt[x][y] = cnt[y][x] = 1;
	}
	floyd();
	for (int k = 1; k <= n; k++) {
		ans = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (j != i && k != i && j != k && g[i][k] + g[k][j] == g[i][j])
					ans += cnt[i][k] * cnt[k][j] / cnt[i][j];
			}
		}
		printf("%.3lf\n", ans);
	}
	return 0;
}
//3 6 6 8
//
