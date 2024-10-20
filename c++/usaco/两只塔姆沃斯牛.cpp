#include <bits/stdc++.h>
using namespace std;
char mp[12][12];
int vis[12][12];
int cx, cy, fx, fy;
void dfs(int fx, int fy, int F1/*0代表向上走，1表示左转,2表示右转*/, int cx, int cy, int t, int F2) {
	if (vis[cx][cy] && vis[fx][fy]) return ;
	vis[cx][cy] = vis[fx][fy] = 1;
	if (F1 == 0 && F2 == 0 && fy + 1 <= 10 && cy + 1 <= 10)
		dfs(fx, fy + 1, 0, cx, cy, t + 1, 0);
	if (F1 == 0 && F2 == 0 && fy + 1 <= 10 && cy + 1 <= 10)
		dfs(fx, fy + 1, 0, cx, cy, t + 1, 0);
	
}
int main() {
	for (int i = 1; i <= 10; i++)
		for (int j = 1; j <= 10; j++) {
			cin >> mp[i][j];
			if (mp[i][j] == 'F')
				fx = i, fy = j;
			if (mp[i][j] == 'C')
				cx = i, cy = i;
		}
	dfs(fx, fy, 0, cx, cy, 0, 0);
	return 0;
}
