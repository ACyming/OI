#include <bits/stdc++.h>
using namespace std;
const int N = 120;
int n, e;
int mp[N][N], s[N], c;
bool vis[N];
void dfs(int x, int b) {
	if (c >= 1000)
		return ;
	vis[x] = 1;
	s[b] = x;
	if (x == n) {
		c++;
		for (int i = 1; i <= b; i++) {
			cout << s[i] << " ";
		}
		cout << endl;
	} else {
		for (int i = 1; i <= n; i++) {
			if ( !vis[i] && mp[x][i] == 1 ) {
				dfs(i, b + 1);
			}
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
	dfs(1, 1);
	return 0;
}
