#include <bits/stdc++.h>
using namespace std;
const int N = 10000010, M = 10000100;
typedef  pair<int, int> PII;
priority_queue<PII, vector<PII>, greater<PII> > q;
int n, m, b, k, x, y, l;
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
int main() {
	scanf("%d%d%d", &n, &m, &b);
	for (int i = 1; i <= m; i++) {
		scanf("%d%d%d", &x, &y, &l);
		add(x, y, l);
		add(y, x, l);
	}
	int xx, yy;
	memset(d, 0x3f, sizeof(d));
	memset(f, 0, sizeof(f));
	d[1] = 0;
	q.push({0, 1});
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
	};
	for (int i = 1; i <= b; i++) {
		cin >> xx >> yy;
		cout << d[xx] + d[yy] << endl;
	}

}

