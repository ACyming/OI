#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int cnt;
int head[5000005];
int n, p, c;
int m;
struct edge {
	int next, to, w;
} g[5000005];
void add(int x, int y) {
	g[++cnt].to = y, g[cnt].next = head[x], head[x] = cnt;
}
queue<int> q;
int in[1000005];
int dis[1000005];
int ans;
void spfa() {
	
	q.push(c);
	in[c] = 1;
	dis[c] = 0;
	while (!q.empty()) {
		int h = q.front();
		in[h] = 0;
		q.pop();
		for (int i = head[h]; i; i = g[i].next) {
			int to = g[i].to;
			if (dis[to] > dis[h] + 1) {
				dis[to] = dis[h] + 1;
				if (in[to] == 0) {
					in[to] = 1;
					q.push(to);
				}
			}
		}
	}
}
int main() {
	scanf("%d%d%d", &n, &p, &c);
	scanf("%d", &m);
	for (int i = 1; i <= p; ++i) {
		int x, y;
		scanf("%d%d", &x, &y);
		add(x, y);
		add(y, x);
	}
	memset(dis, 0x3f, sizeof(dis));
	spfa();
	for (int i = 1; i <= n; ++i) {
		ans = max(ans, dis[i]);
	}
	ans += m;
	cout << ans + 1 << endl;
}

