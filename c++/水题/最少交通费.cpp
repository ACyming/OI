#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int pre[N];
int d[N], f[N];
int n, m, u, v, p, k;
struct Node {
	int v, next, p;

} a[N];
void add(int u, int v, int cost) {
	a[++k] = {v, pre[u], cost};
	pre[u] = k;
}
typedef pair<int, int> PII;
priority_queue<PII, vector<PII>, greater<PII>> q;
int main() {
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		cin >> u >> v >> p;
		add(u, v, p);
	}
	memset(d, 0x3f, sizeof(d));
	d[1] = 0;
	q.push({0, 1});
	while (!q.empty()) {
		auto w = q.top();
		int dis = w.first;
		int pi = w.second;
		q.pop();
		if (f[pi])
			continue;
		f[pi] = true;
		if (pi == n) cout << dis, exit(0);
		for (int i = pre[pi]; i; i = a[i].next) {
			int to = a[i].v;
			if (d[to] > dis + a[i].p) {
				d[to] = dis + a[i].p;
				q.push({d[to], to});

			}
		}
	}
	cout << -1;
	return 0;
}
