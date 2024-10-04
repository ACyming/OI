#include <bits/stdc++.h>
#define inf 0x3f3f3f3f
using namespace std;
const int N = 1010, M = 20010;
typedef pair<int, int> PII;
priority_queue<PII, vector<PII>, greater<PII> > q;
int n, m, s, t, k;
int d[N][2], pre[N], ans;
bool f[N];
int r[N];
struct Node {
	int v, next, l, cost;
} a[M * 2];
void add(int u, int v, int l, int cost) {
	a[++k] = {v, pre[u], l, cost};
	pre[u] = k;
}
void dij() {
//	d[s][1] = d[s][0] = 0;
//	for (int i = 1; i <= n; i++) {
//		int mi = -1;
//		for (int j = 1; j <= n; j++) {
//			if (!f[j] && (mi == -1 || d[mi][0] > d[j][0]))
//				mi = j;
//		}
//		f[mi] = 1;
//		for (int j = pre[mi]; j; j = a[j].next) {
//			int to = a[j].v;
//			if (!f[to] && (d[to][0] > d[mi][0] + a[j].l || d[to][0] == d[mi][0] + a[j].l && d[to][1] > d[mi][1] + a[j].cost)) {
//				d[to][0] = d[mi][0] + a[j].l;
//				d[to][1] = d[mi][1] + a[j].cost;
//			}
//		}
//	}
//	printf("%d %d\n", d[t][0], d[t][1]);
	memset(d, 0x3f, sizeof(d));
	memset(f, 0, sizeof(f));
	d[s][1] = d[s][0] = 0;
	q.push({0, s});
	while (!q.empty()) {
		PII b = q.top();
		int mi = b.second;
		q.pop();
		if (f[mi])
			continue;
		f[mi] = true;
		for (int i = pre[mi]; i; i = a[i].next) {
			int to = a[i].v;
			if (!f[to] && (d[to][0] > d[mi][0] + a[i].l || d[to][0] == d[mi][0] + a[i].l && d[to][1] > d[mi][1] + a[i].cost)) {
				d[to][0] = d[mi][0] + a[i].l;
				d[to][1] = d[mi][1] + a[i].cost;
				q.push({d[to][0], to});
			}
		}
	}
	printf("%d %d\n", d[t][0], d[t][1]);
}
void scan() {
	int x, y, l, c;
	memset(d, 0x3f, sizeof(d));
	memset(pre, 0, sizeof(pre));
	memset(f, 0, sizeof(f));
	memset(r, 0, sizeof(r));
	memset(a, 0, sizeof(struct Node)*M);
	k = 0;
	ans = 0;
	for (int i = 1; i <= m; i++) {
		cin >> x >> y >> l >> c;
		add(x, y, l, c), add(y, x, l, c);
	}
	cin >> s >> t;
	dij();
}
int main() {
	while (1) {
		cin >> n >> m;
		if (n == 0 && m == 0) return 0;
		scan();
	}
	return 0;
}
