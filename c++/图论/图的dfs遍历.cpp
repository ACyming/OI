#include <bits/stdc++.h>
using namespace std;
int n, m, t;
const int N = 11;
int mp[N][N];
bool vis[N];
void dfs(int x){
	vis[x] = 1;
	cout << x << " ";
	for (int k = 1; k <= n; k++) {
		if (mp[x][k] && !vis[k]) {
			dfs(k);
		}
	}
}
int main() {
	cin >> n >> m >> t;
	int x, y;
	for (int i = 1; i <= m; i++) {
		cin >> x >> y;
		mp[x][y] = mp[y][x] = 1;
	}
	dfs(t);
	return 0;
}
