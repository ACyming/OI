#include <bits/stdc++.h>
using namespace std;
int n, e;
const int N = 11;
int mp[N][N];
bool vis[N];
void dfs(int x) {
	
	
	cout << x << " ";
	for (int k = 1; k <= n; k++) {
		if (mp[x][k]&& !vis[k]){
			vis[x] = 1;
			dfs(k);
			vis[x]=0;
		}
	}
	
}
int main() {
	cin >> n >> e;
	int x, y;
	for (int i = 1; i <= e; i++) {
		cin >> x >> y;
		mp[x][y] = mp[y][x] = 1;
	}
	dfs(1);
	return 0;
}
