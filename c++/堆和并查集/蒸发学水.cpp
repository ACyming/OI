#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
int n, m, ans, tot;
int x[5] = {0, 0, 1, 0, -1}, y[5] = {0, -1, 0, 1, 0};
bool mp[N][N], bz[N][N];
struct node {
	int val, x, y;
} a[N * N];
int cmp(node xxx, node yyy) {
	return xxx.val > yyy.val;
}
void dfs(int xx, int yy) {
	for (int i = 1; i <= 4; i++)
		if (mp[xx + x[i]][yy + y[i]] == 0 && bz[xx + x[i]][yy + y[i]] == 0 && xx + x[i] >= 1 && xx + x[i] <= m && yy + y[i] >= 1 && yy + y[i] <= n) {
			bz[xx + x[i]][yy + y[i]] = 1;
			dfs(xx + x[i], yy + y[i]);
		}
}
int main() {
	cin >> n >> m;
	int x;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> x;
			a[++tot].val = x;
			a[tot].x = i;
			a[tot].y = j;
		}
	}
	sort(a + 1, a + 1 + tot, cmp);
	for (int i = 1; i <= tot; i++) {
		ans = 0;
		memset(bz, 0, sizeof(bz));
		mp[a[i].x][a[i].y] = 1;
		for (int k = 1; k <= n; k++)
			for (int j = 1; j <= m; j++)
				if (mp[k][j] == 0 && bz[k][j] == 0)
					ans++, dfs(k, j);
		printf("%d\n", ans);
	}
	return 0;
}
