#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 20, M = 1e4 + 10;
int n, m, s, t, k;
int d[N], pre[N];//pre[]->链表头
bool f[N];
int r[N];//前驱结点
struct Node {
	int v, next, l;
} a[M * 2];
void add(int u, int v, int l) {
	a[++k] = {v, pre[u], l};
	pre[u] = k;
}
void print(int x) {
	if (x != s) print(r[x]);
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
		add(x, y, l), add(y, x, l);
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
		for (int j = pre[mi]; j; j = a[j].next) {
			int to = a[j].v;
			if (!f[to] && d[to] > d[mi] + a[j].l) {
				d[to] = d[mi] + a[j].l;
				r[to] = mi;
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
