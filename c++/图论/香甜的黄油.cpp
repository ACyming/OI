#include <cstdio>
#include <iostream>
#include <cmath>
#include <queue>
#include <cstring>
using namespace std;
int n, m, x, y;
int g, ans, nm, u;
int a[8020], b[8020], head[8020], dis[8020], c[8020];
bool in[8020];
int cc;
struct rec {
	int next, to, l;
} f[3000];
void add(int xx, int yy, int zz) {
	f[++cc] = {head[xx], yy, zz};
	head[x] = cc;
	f[++cc] = {head[yy], xx, zz};
	head[y] = cc;
}
queue<int> d;
int spfa(int s) {
	int num = 0;
	memset(dis, 0x3f3f3f3f, sizeof(dis));
	memset(in, false, sizeof(in));
	d.push(s);
	in[s] = true;
	dis[s] = 0;
	while (!d.empty()) {
		g = d.front();
		d.pop();
		for (int i = head[g]; i; i = f[i].next)
			if (dis[g] + f[i].l < dis[f[i].to]) {
				dis[f[i].to] = dis[g] + f[i].l;
				if (!in[f[i].to]) {
					in[f[i].to] = true;
					d.push(f[i].to);
				}
			}
		in[g] = false;
	}
	for (int i = 1; i <= n; i++)
		num += dis[i] * c[i];
	return num;
}
int main() {
	cin >> nm >> n >> m;
	for (int i = 1; i <= nm; i++) {
		cin >> x;
		c[x]++;
	}
	for (int i = 1; i <= m; i++) {
		cin >> x >> y >> u;
		add(x, y, u);
	}
	ans = 0x3f3f3f3f;
	for (int i = 1; i <= n; i++)
		ans = min(spfa(i), ans);
	printf("%d", ans);
}

