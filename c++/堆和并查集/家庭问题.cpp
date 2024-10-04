#include <bits/stdc++.h>
using namespace std;
int n, f[110], cnt, m, ch[110];
int find(int x) {
	if (f[x] == x) return x;
	else return f[x] = find(f[x]);
}
void merge(int x, int y) {
	int fx = find(x);
	int fy = find(y);
	if (fx != fy) {
		f[fx] = fy;
		ch[fy] += ch[fx];
	}
}
int main() {
	int x, y, ma = -99999;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		f[i] = i;
		ch[i] = 1;
	}
	for (int i = 1; i <= m; i++) {
		cin >> x >> y;
		merge(x, y);
	}
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (f[i] == i)
			cnt++, ma = max(ma, ch[i]);
	}
	cout << cnt << " " << ma << endl;
	return 0;
}
