#include <bits/stdc++.h>
using namespace std;
long long n, m, t, ans1, ans2;
long long g[1200][1200];
void floyd() {
	for (int k = 1; k <= n; k ++)
		for (int i = 1; i <= n; i ++)
			for (int j = 1; j <= n; j ++)
				//                               起点到中点 起点到终点 
				if (i != j && j != k && k != i && g[k][i] + g[k][j] < g[i][j])
					g[i][j] = g[j][i] = g[i][k] + g[k][j];

}
int main() {
	cin >> n >> m >> t;
	int x, y, l;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i != j)g[i][j] = g[j][i] = 999999;
		}
	}
	for (int i = 1; i <= m; i++) {
		cin >> x >> y >> l;
		g[x][y] = g[y][x] = l;
	}
	floyd();
	int k, yd;
	cin >> k;
	for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= n; j++) {
			cout << g[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 1; i <= k; i++) {
		cin >> yd;
		if (g[yd][1] <= t || g[yd][n] <= t) {
			//	cout<<g[yd][1]<<" "<< g[yd][n] <<endl;
			ans1++;
		} 
		ans2 = max(ans2, min(g[yd][1], g[yd][n]));
	}
	cout << ans1 << endl << ans2;
	return 0;
}
