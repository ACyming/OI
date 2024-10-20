#include <bits/stdc++.h>
using namespace std;
const int N = 810, M = 1460;
typedef pair<int, int> PII;
priority_queue<PII, vector<PII>, greater<PII> > q;
int n, p, c, k, x, y, l;
int pre[N];
int d[N];
bool f[N];
int w[N];
struct Node {
	int v, next, len;
} a[M * 2];
void add(int u, int v, int len) {
	a[++k] = {v, pre[u], len};
	pre[u] = k;
}
int dijkstra(int h) {
	memset(d, 0x3f, sizeof(d));
	memset(f, 0, sizeof(f));
	d[h] = 0;
	q.push({0, h});
	while (!q.empty()) {
		PII b = q.top();
		int dis = b.first;
		int pi = b.second;
		q.pop();
		if (f[pi]) continue;
		f[pi] = true;
		for (int i = pre[pi]; i; i = a[i].next) {
			int to = a[i].v;
			if (d[to] > dis + a[i].len) {
				d[to] = dis + a[i].len;
				q.push({d[to], to});
			}
		}
	}
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += d[w[i]];
	}
	return sum;
}
int main() {
	scanf("%d%d%d", &n, &p, &c);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &w[i]);
	}
	for (int i = 1; i <= c; i++) {
		scanf("%d%d%d", &x, &y, &l);
		add(x, y, l);
		add(y, x, l);
	}
	int mi = INT_MAX;
	for (int i = 1; i <= p; i++) {
		mi = min(mi, dijkstra(i));
	}
	printf("%d", mi);
}
