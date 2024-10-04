#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int N = 2510;
int g[N][N];
int dist[N];
bool st[N];
int n, m, sd, ed;
int dijkstra() {
	memset(dist, 0x3f, sizeof dist);
	dist[sd] = 0;
	for (int i = 1; i <= n; i++) {
		int t = -1;
		for (int j = 1; j <= n; j++) {
			if (!st[j] && (t == -1 || dist[t] > dist[j])) 
				t = j;
		}
		st[t] = 1;
		for (int j = 1; j <= n; j++) {
			dist[j] = min(dist[j], dist[t] + g[t][j]);
		}
	}
	return dist[ed];
}
int main() {
	cin >> n >> m >> sd >> ed;
	memset(g, 0x3f, sizeof g);
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		g[a][b] = g[b][a] = min(g[a][b], c);
	}
	cout << dijkstra() << endl;
	return 0;
}
