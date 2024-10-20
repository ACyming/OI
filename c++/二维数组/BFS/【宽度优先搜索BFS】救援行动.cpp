#include <bits/stdc++.h>
using namespace std;
int n, m;
char mp[220][220];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int zx, zy, qx, qy;
int bz[220][220];
void bfs(int x, int y) {
	int tail = 1, head = 0;
	bz[1][0] = x;
	bz[1][1] = y;
	bz[1][2] = 0;
	while (tail > head) {
		head++;
		for (int i = 0; i < 4; i++) {
			int xx = bz[tail][0] + dx[i];
			int yy = bz[tail][1] + dy[i];
			if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && mp[xx][yy] != "#") {
				tail++;
				bz[tail][0]=xx;
				bz[tail][1]=yy;
				bz[tail][2]++;
				if(mp[xx][yy]=="x")
				{
					bz[tail][2]++;
				}
				if(mp[xx][yy]=="a")
				{
					cout<<bz[tail][2];
					return ;
				}
			}
		}
	}
	
}
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> mp[i][j];

			if (mp[i][j] == 'r') {
				qx = i;
				qy = j;
			}
		}
	}
	bfs(qx, qy);
	
	return 0;
}
