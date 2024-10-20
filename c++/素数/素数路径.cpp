#include <bits/stdc++.h>
using namespace std;
int n, e;
const int N = 11;
int mp[N][N];
bool vis[N];
int maxx;
bool check(int x) {
	if (x < 2)
		return 0;
	for (int i = 2; i <= sqrt(x); i++) {
		if (x % i == 0)
			return 0;
	}
	return 1;
}
void dfs(int x, int c) {
	vis[x] = 1;
	maxx = max(maxx, c);
	for (int i = 1; i <= n; i++) {
		if (mp[x][i] & !vis[i] & check(x + i)) {
			dfs(i, c + 1);
		}
	}
	vis[x] = 0;
}
int main() {
	cin >> n >> e;
	int x, y;
	for (int i = 1; i <= e; i++) {
		cin >> x >> y;
		mp[x][y] = mp[y][x] = 1;
	}
	int s;
	cin >> s;
	dfs(s, 1);
	if (maxx == 1)
		cout << 0;
	else
		cout << maxx;
	return 0;
}
