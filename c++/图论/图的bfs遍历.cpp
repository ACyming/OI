#include <bits/stdc++.h>
using namespace std;
int n, e;
const int N = 11;
int mp[N][N], maxx;
bool vis[N];
int q[N * N];
void bfs(int x) {
	int head = 1, tail = 0, hx = 0;
	tail++;
	q[1] = x;
	cout << x << " ";
	vis[x] = 1;

	while (head <= tail) {
		hx = q[head];
		for (int k = 1; k <= n; k++) {
			if (mp[hx][k] && !vis[k]) {
				tail++;
				q[tail] = k;
				cout << k << " ";
				vis[k] = 1;
			}
		}
		head++;
	}

}
int main() {
	cin >> n >> e;
	int x, y;
	for (int i = 1; i <= e; i++) {
		cin >> x >> y;
		mp[x][y] = mp[y][x] = 1;
	}
	bfs(1);
	
	return 0;
}
