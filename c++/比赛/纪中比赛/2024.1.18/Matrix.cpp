#include <bits/stdc++.h>
using namespace std;
long long n, m, k;
long long dx[12];
long long dy[12];
long long mp[102][102];
long long sx, sy;
long long d[100020][3];
int head = 0, tail = 1;
void bfs(int x, int y) {
	d[1][0] = x;
	d[1][1] = y;
	while (head < tail) {
		head++;
		for (int i = 1; i <= k; i++) {
			int xx = d[head][0] + dx[i];
			int yy = d[head][1] + dy[i];
			if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && mp[xx][yy] == 0) {
				tail++;
				mp[xx][yy] = 1;
				d[tail][0] = xx;
				d[tail][1] = yy;
			}
		}
	}
}
int main() {
	freopen("present.in", "r", stdin);
	freopen("present.out", "w", stdout);
	cin >> n >> m >> k;
	for (int i = 1; i <= k; i++) {
		cin >> dx[i] >> dy[i];
	}
	bfs(1, 1);
	cout << tail;
	return 0;
}
