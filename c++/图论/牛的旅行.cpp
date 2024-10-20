#include <bits/stdc++.h>
using namespace std;
const int maxn = 150 + 5, maxm = maxn * maxn / 2;
const double Inf = 0x3f3f3f3f;
struct Point {
	int x, y;
} v[maxn];
int n;
double d[maxn][maxn], dis[maxn];
double Far(Point a, Point b) {
	double s = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
	return s;
}
void Read() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d%d", &v[i].x, &v[i].y);
	}
	for (int i = 1; i <= n; i++) {
		char ch[maxn];
		scanf("%s", ch + 1);
		for (int j = 1; j <= n; j++) {
			if (i == j) {
				continue;
			}
			d[i][j] = ch[j] - '0';
			if (d[i][j]) {
				d[i][j] = Far(v[i], v[j]);
			} else {
				d[i][j] = Inf;
			}
		}
	}
}
double Max;
double Min = Inf;
void sol() {
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (d[i][j] > d[i][k] + d[k][j]) {
					d[i][j] = d[i][k] + d[k][j];
				}
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j) {
				continue;
			}
			if (d[i][j] == Inf) {
				continue;
			}
			if (dis[i] < d[i][j]) {
				dis[i] = d[i][j];
			}
		}
		Max = max(Max, dis[i]);
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (d[i][j] != Inf) {
				continue;
			}
			double l;
			l = Far(v[i], v[j]);
			Min = min(Min, dis[i] + dis[j] + l);
		}
	}
	Max = max(Max, Min);
	printf("%.6lf", Max);
}
int main() {
	Read();
	sol();
	return 0;
}
