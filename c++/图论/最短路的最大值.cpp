#include <bits/stdc++.h>
using namespace std;
typedef  pair<int, int> PII;
const int N = 50100, M = 100100;
priority_queue<PII, vector<PII>, greater<PII> > q;
int n, m, x, k, u, v, len;
int pre[2][N];
struct Node {
	int v, next, len;
} a[M * 2];
void add(int u, int v, int len, int fx) {
	a[++k] = {v, pre[fx][u], len};
	pre[fx][u] = k;
}
int d[2][N];
bool f[N];
void dj(int t, int fx) {
	d[fx][t] = 0;
	q.push({0, t});
	memset(f, 0, sizeof(f));
	while (!q.empty()) {
		PII w = q.top();
		int dis = w.first;
		int pi = w.second;
		q.pop();
		if (f[pi]) continue;
		f[pi] = true;
		for (int i = pre[fx][pi]; i; i = a[i].next) {
			int to = a[i].v;
			if (d[fx][to] > dis + a[i].len) {
				d[fx][to] = dis + a[i].len;
				q.push({d[fx][to], to});
			}
		}
	}
}
int main() {
	cin >> n >> m >> x;
	for (int i = 1; i <= m; i++ ) {
		cin >> u >> v >> len;
		add(u, v, len, 1);
		add(v, u, len, 0);
	}
	memset(d, 0x3f, sizeof(d));
	dj(x, 0);
	dj(x, 1);
	int ma = 0;
	for (int i = 1; i <= n; i++) {
		ma = max(ma, d[0][i] + d[1][i]);
	}
	cout << ma;
	return 0;
}
