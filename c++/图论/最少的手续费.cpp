#include <bits/stdc++.h>
using namespace std;
int a[2020][2020], n, m, s, e;
double d[2020];
bool f[2020];
queue<int> q;
void spfa(int s) {
	f[s] = 1;
	q.push(s);
	d[s] = 100;
	int hx;
	while (!q.empty()) {
		hx = q.front();
		q.pop();
		f[hx] = 0;
		for (int k = 1; k <= n; k++) {
			if (a[hx][k] > 0 && d[hx] / (1 - a[hx][k] * 0.01) < d[k]) {
				d[k] = d[hx] / (1 - a[hx][k] * 0.01);
				if (!f[k])
					q.push(k), f[k] = 1;
			}
		}
	}
} 
int main() {
	cin >> n >> m;
	int x, y, z;
	for (int i = 1; i <= m; i++) {
		cin >> x >> y >> z;
		a[x][y] = a[y][x] = z;
	}
	cin >> s >> e;
	for (int i = 1; i <= n; i++) d[i] = 0x3f3f3f3f;
	spfa(e);
	printf("%.8lf", d[s]);
}
