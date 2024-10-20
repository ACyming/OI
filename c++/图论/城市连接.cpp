#include <bits/stdc++.h>
#define PII pair<int ,int>
using namespace std;
int n;
int g[1200][1200], dis[1200];
bool f[1200];
int pre[1200], cnt;
void dij() {
	for (int i = 1; i <= n; i++) {
		int mi = -1;
		for (int j = 1; j <= n; j++) {
			if (!f[j] && (mi == -1 || dis[j] < dis[mi])) {
				mi = j;
			}
		}
		f[mi] = 1;
		for (int j = 1; j <= n; j++) {
			if (!f[j] && dis[j] > dis[mi] + g[mi][j] && g[mi][j] != 0) {
				dis[j] = dis[mi] + g[mi][j];
				pre[j] = mi;
			}
		}
	}
}
void print(int x) {
	if (x != 1) print(pre[x]);
	cout << x << " ";
}
int main() {
	// freopen("city.in", "r", stdin);
	// freopen("city.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
		dis[i] = 0x3f3f3f3f;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> g[i][j];
	dis[1] = 0;
	dij();
	print(n);
	cout << endl << dis[n];
	return 0;
}
