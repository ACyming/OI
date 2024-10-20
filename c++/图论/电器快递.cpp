#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 20, M = 1e5 + 20;
struct node {
	int to, len, next;
} a[M], b[M];
int head1[N], head2[N];
int k1, k2;
int dis1[N], dis2[N];
bool in1[N], in2[N];
void aadd(int u, int v, int len) {
	a[++k1] = {v, len, head1[u]};
	head1[u] = k1;
}
void badd(int u, int v, int len) {
	b[++k2] = {v, len, head2[u]};
	head2[u] = k2;
}
queue<int> q;
void sp1() {
	memset(dis1, 0x3f, sizeof(dis1));
	dis1[1] = 0;
	q.push(1);
	in1[1] = 1;
	while (!q.empty()) {
		int h = q.front();
		q.pop();
		in1[h] = false;
		for (int i = head1[h]; i; i = a[i].next) {
			int to = a[i].to;
			if (dis1[h] + a[i].len < dis1[to]) {
				dis1[to] = dis1[h] + a[i].len;
				if (!in1[to]) {
					in1[to] = 1;
					q.push(to);
				}
			}
		}
	}
}
void sp2() {
	memset(dis2, 0x3f, sizeof(dis2));
	dis2[1] = 0;
	in2[1] = 1;
	q.push(1);
	while (!q.empty()) {
		int h = q.front();
		q.pop();
		in2[h] = false;
		for (int i = head2[h]; i; i = b[i].next) {
			int to = b[i].to;
			if (dis2[h] + b[i].len < dis2[to]) {
				dis2[to] = dis2[h] + b[i].len;
				if (!in2[to]) {
					in2[to] = 1;
					q.push(to);
				}
			}
		}
	}
}
int main() {
	int n, m, x, y, t;
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		cin >> x >> y >> t;
		aadd(x, y, t);
		badd(y, x, t);
	}
	sp1();
	sp2();
	int ans = 0;
	for (int i = 2; i <= n; i++) {
		ans += (dis1[i] + dis2[i]);
	}
	cout << ans;
	return 0;
}
