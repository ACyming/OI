#include <bits/stdc++.h>
using namespace std;
int n, m;
double dis[110], g[110][110];
struct node {
	int x;
	int y;
} a[110];
double sq(int x1, int y1, int x2, int y2) {
	return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}
void dfs(int x, double sum) {
	dis[x] = sum;
	for (int k = 1; k <= n; k++) {
		if (g[x][k] > 0 && dis[x] + g[x][k] < dis[k]) {

			dfs(k, dis[x] + g[x][k]);
		}
	}
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].x >> a[i].y;
		dis[i] = 0x3f3f3f3f;
	}
	cin >> m;
	int xx, yy, s, e;
	for (int i = 1; i <= m; i++) {
		cin >> xx >> yy;
		g[xx][yy] = g[yy][xx] = sq(a[xx].x, a[xx].y, a[yy].x, a[yy].y);
	}
	cin >> s >> e;
	dfs(s, 0);
	printf("%.2lf", dis[e]);
	return 0;
}
