#include <bits/stdc++.h>
using namespace std;
int n, m, p, q;
const int N = 1e4 + 10;
int f[N * 2];
int find(int x) {
	if (f[x] == x) return x;
	else return f[x] = find(f[x]);
}
void merge(int x, int y) {
	int fx = find(x);
	int fy = find(y);
	if (fx != fy) f[fx] = fy;
}
int main() {
	int x, y;
	cin >> n >> m >> p >> q;
	for (int i = 1; i <= n + m; i++) {
		f[i] = i;
	}
	for (int i = 1; i <= p; i++) {
		cin >> x >> y;
		merge(x, y);
	}
	for (int i = 1; i <= q; i++) {
		cin >> x >> y;
		merge(x * (-1) + n, y * (-1) + n);
	}
	int cnta = 0, cntb = 0;
	for (int i = 1; i <= n; i++) {
		if (find(1) == find(i)) cnta++;
	}
	for (int i = n + 1; i <= n + m; i++) {
		if (find(n + 1) == find(i)) cntb++;
	}
	cout << min(cnta, cntb);
	return 0;
}
