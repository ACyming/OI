#include <bits/stdc++.h>
using namespace std;
int n, m, s, t, e;
int g[3000][3000];
int dis[3000];
bool st[3000];
int main() {
	cin >> n >> m >> s >> e;
	memset(g, 0x3f, sizeof(g));
	memset(dis, 0x3f, sizeof(dis));
	dis[s] = 0;
	int a, b, c;
	for (int i = 1; i <= m; i++) {
		cin >> a >> b >> c;
		g[a][b] = g[b][a] = min(g[a][b], c);
	}
	for (int i = 1; i <= n; i++) {
		int t = -1;
		for (int j = 1; j <= n; j++) {
			if (!st[j] && (t == -1 || dis[j] < dis[t])) {
				t = j;
			}
		}
		st[t] = true;
		for (int j = 1; j <= n; j++) {
			dis[j] = min(dis[j], dis[t] + g[t][j]);
		}
	}
	cout << dis[e];
}
