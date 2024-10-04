#include <bits/stdc++.h>
using namespace std;
const int N = 510, M = 8010;
int n, c, m, u, v, l;
int p[N];
int d[N][N];
int main() {
	cin >> n >> c >> m;
	for (int i = 1; i <= c; i++) {
		cin >> p[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			d[i][j] = d[j][i] = 0x3f3f3f3f;
		}
	}
	for (int i = 1; i <= n; i++)
		cin >> u >> v >> l, d[u][v] = d[v][u] = l;
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
	int sum = 0, mi = INT_MAX, x = 1;
	for (int i = 1; i <= n; i++) {
		sum = 0;
		for (int j = 1; j <= c; j++) {
			sum += d[i][p[j]];

		}
		if (mi < sum) sum = x, mi = i;
	}
	cout << mi;
}
