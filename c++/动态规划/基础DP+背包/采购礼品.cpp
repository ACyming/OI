#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10, M = 5e3 + 10;
int n, m, w, x, y;
int f[N], p[N], v[N], dp[N];
int find(int x) {
	if (x == f[x])	return x;
	else return f[x] = find(f[x]);
}
void hb(int x, int y) {
	int fx = find(x);
	int fy = find(y);
	if (fx != fy) {
		f[fx] = fy;
	}
}
int main() {
	cin >> n >> m >> w;
	for (int i = 1; i <= n; i++)
		cin >> p[i] >> v[i], f[i] = i;
	for (int i = 1; i <= m; i++) {
		cin >> x >> y;
		hb(x, y);
	}
	for (int i = 1; i <= n; i++) {
		if (f[i] != i) {
			int h = find(i);
			p[h] += p[i];
			v[h] += v[i];
			p[i] = v[i] = 0;
		}
	}
	for (int i = 1; i <= n; i++)
		for (int j = w; j >= p[i]; j--)
			dp[j] = max(dp[j - p[i]] + v[i], dp[j]);
	cout << dp[w];
	return 0;
}
