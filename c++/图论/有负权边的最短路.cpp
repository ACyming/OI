#include <bits/stdc++.h>
#define inf 0x3f3f3f3f
using namespace std;
const int M = 2e5 + 10, N = 2e5 + 10;
struct Edge {
	int ed, next, len;
} e[M];
int head[N], c, n, m, dis[N], in[N];
queue<int> q;
void add(int u, int v, int l) {
	e[++c] = {v, head[u], l};
	head[u] = c;
}
void SPFA(int s) {
	dis[s] = 0;
	q.push(s);
	in[s] = 1;
	while (!q.empty()) {
		int hd = q.front();
		q.pop();
		in[hd] = 0;
		for (int i = head[hd]; i != 0; i = e[i].next) {
			int to = e[i].ed;
			if (dis[hd] + e[i].len < dis[to]) {
				dis[to] = dis[hd] + e[i].len;
				if (!in[to]) {
					q.push(to);
					in[to] = true;
				}
			}
		}
	}
}
int main() {
	cin >> n >> m;
	int u, v, l;
	for (int i = 1; i <= m; i++) {
		cin >> u >> v >> l;
		add(u, v, l);
	}
	for (int i = 1; i <= n; i++) {
		dis[i] = inf;
	}
	SPFA(1);
	for (int i = 2; i <= n; i++) {
		cout << dis[i] << endl;
	}
	return 0;
}
