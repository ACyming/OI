#include <bits/stdc++.h>
using namespace std;
const int N = 3000;
const int M = 7000;
const int INF = 0x3f3f3f3f;
int head[M], in[M], dis[M], s, e;
int num, n, m;
queue<int> q;
struct edge {
	int u, v, w,next;
}g[M * 2];
void add(int u, int v, int w) {
	g[++num]={u,v,w,head[u]};
	head[u] = num;
}
int SPFA() {
	in[s] = 1;
	dis[s] = 0;
	q.push(s);
	while (!q.empty()) {
		int u = q.front();
		q.pop();
		in[u] = 0;
		for (int i = head[u]; i != -1; i = g[i].next) {
			int v = g[i].v;
			if (dis[u] + g[i].w < dis[v]) {
				dis[v] = dis[u] + g[i].w;
				if (!in[v]) {
					in[v] = 1;
					q.push(v);
				}
			}
		}
	}
	return dis[e];
}
int main() {
	num = 0;
	memset(head, -1, sizeof(head));
	scanf("%d%d", &n, &m);
	scanf("%d%d", &s, &e);
	for (int i = 1; i <= m; i++) {
		int u, v, w;
		scanf("%d%d%d", &u, &v, &w);
		add(u, v, w);
		add(v, u, w);
	}
	for (int i = 1; i <= N; i++)
		dis[i] = INF;
	printf("%d\n", SPFA());
	return 0;
}
