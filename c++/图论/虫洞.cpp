#include <bits/stdc++.h>
using namespace std;
const int N = 600, M = 3000;
struct {
	int to, next, len;
} a[M * 2];
int n, m, w, k, pre[N], flag, cnt[N], d[N];
int t, x, y, l;
bool f[N];
queue<int> q;
void add(int u, int v, int len) {
	a[++k] = {v, pre[u], len};
	pre[u] = k;
}
void bfs() {
	memset(cnt, 0, sizeof(cnt));
	while (!q.empty()) q.pop();
	for (int i = 1; i <= n; i++) {
		q.push(i);
		f[i] = true;
	}
	while (!q.empty()) {
		int h = q.front();
		q.pop();
		f[h] = false;
		for (int i = pre[h]; i; i = a[i].next) {
			int to = a[i].to;
			if (d[to] > d[h] + a[i].len) {
				cnt[to] = cnt[h] + 1;
				if (cnt[to] == n) {
					puts("YES");
					flag = true;
					return ;
				}
				d[to] = d[h] + a[i].len;
				if (!f[to]) {
					q.push(to);
					f[to] = true;
				}
			}
		}
	}
}
int main() {
	cin >> t;
	while (t--) {
		flag = false;
		memset(f, 0, sizeof(f));
		memset(d, 0, sizeof(d));
		memset(pre, 0, sizeof(pre));
		k = 0;
		cin >> n >> m >> w;
		for (int i = 1; i <= m; i++) {
			cin >> x >> y >> l;
			add(x, y, l);
			add(y, x, l);
		}
		for (int i = 1; i <= w; i++) {
			cin >> x >> y >> l;
			add(x, y, -l);
		}
		bfs();
		if (!flag)
			puts("NO");
	}
	return 0;
}
