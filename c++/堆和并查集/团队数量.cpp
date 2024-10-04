#include <bits/stdc++.h>
using namespace std;
const int N = 1020;
int f[2 * N];
int n, m, p, q;
char c;
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
	cin >> n >> m;
	for (int i = 1; i <= 2 * n; i++)
		f[i] = i;
	for (int i = 1; i <= m; i++) {
		cin >> c >> p >> q;
		if (c == 'F') {
			hb(p, q);
		} else {
			hb(p + n, q);
			hb(q + n, p);
		}
	}
	int cnt = 0;
	for (int i = 1; i <= n; i++)
		if (f[i] == i) cnt++;
	cout << cnt;
	return 0;
}
