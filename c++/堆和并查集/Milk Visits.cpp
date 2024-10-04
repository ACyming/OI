#include <bits/stdc++.h>
using namespace std;
int fa[100020], ans[100020], m, n;
char csgo[100020];
int find(int x) {
	if (x == fa[x])	return x;
	return fa[x] = find(fa[x]);
}
void hb(int x, int y) {
	fa[find(x)] = find(y);
}
int main() {
	int cnt = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		fa[i] = i;
		cin >> csgo[i];
	}
	for (int i = 1; i <= n - 1; i++) {
		int x, y;
		cin >> x >> y;
		if (csgo[x] == csgo[y])
			hb(x, y);
	}
	for (int i = 1; i <= m; i++) {
		int a, b;
		cin >> a >> b;
		char c;
		cin >> c;
		if (find(a) == find(b) && csgo[a] != c)
			ans[++cnt] = 0;
		else
			ans[++cnt] = 1;
	}
	for (int i = 1; i <= cnt; i++)	
		cout << ans[i];
	return 0;
}
