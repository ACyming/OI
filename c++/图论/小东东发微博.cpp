#include <bits/stdc++.h>
using namespace std;
const int M = 1e5 + 20, N = 1e5 + 20;
struct Edge {
	int s, e, next;
} e[M];
int head[N], idd, cnt, vis[N];
void add(int x, int y) {
	e[++idd] = {x, y, head[x]};
	head[x] = idd;
}
void dfs(int x) {
	vis[x] = 1;
	cnt++;
	for (int i = head[x]; i != 0; i = e[i].next) {
		int to = e[i].e;
		if (!vis[to]) {
			dfs(to);
		}
	}
}
int main() {
	int t, m, s, num = 0;
	cin >> t;
	while (t--) {
		cin >> m >> s;
		idd = 0;
		cnt = 0;
		memset(head, 0, sizeof(head));
		memset(vis, 0, sizeof(vis));
		while (m--) {
			int x, y;
			cin >> x >> y;
			add(y, x);
		}
		dfs(s);
		cout << "Case #" << ++num << ": " << cnt - 1 << endl;
	}
	return 0;
}
