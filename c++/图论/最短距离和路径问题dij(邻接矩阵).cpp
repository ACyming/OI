#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 20;
int n, m, s, t;
int a[N][N];
int d[N], pre[N];
bool f[N];
void print(int x) {
	if (x != s) print(pre[x]);
	cout << x << " ";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m >> s >> t;
	int x, y, l;
	for (int i = 1; i <= m; i++) {
		cin >> x >> y >> l;
		if (a[x][y] == 0 || l < a[x][y]) {
			a[x][y] = a[y][x] = l;
		}
	}
	memset(d, 0x3f, sizeof(d));
	d[s] = 0;
	for (int i = 1; i <= n; i++) {
		int mi = -1;
		for (int j = 1; j <= n; j++) {
			if (!f[j] && (mi == -1 || d[mi] > d[j]))
				mi = j;
		}
		f[mi] = 1;
		for (int j = 1; j <= n; j++) {
			if (!f[j] && a[mi][j] != 0 && d[j] > d[mi] + a[mi][j]) {
				d[j] = d[mi] + a[mi][j];
				pre[j] = mi;
			}
		}
	}
	if (d[t] == 0x3f3f3f3f) {
		cout << "can't arrive";
		return 0;
	} else {
		cout << d[t] << endl;
		print(t);
	}
	return 0;
}
