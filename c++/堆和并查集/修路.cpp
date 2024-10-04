#include <bits/stdc++.h>
using namespace std;
int n, f[99999], cnt, m;
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
	while (1) {
		cin >> n >> m;
		if (n == 0) break;
		for (int i = 1; i <= n; i++) {
			f[i] = i;
		}
		for (int i = 1; i <= m; i++) {
			cin >> x >> y;
			merge(x, y);
		}
		int cnt = 0;
		for (int i = 1; i <= n; i++) {
			if (f[i] == i)
				cnt++;
		}
		cout << cnt - 1 << endl;
	}
	return 0;
}
