#include <bits/stdc++.h>
using namespace std;
int n, m;
const int N = 1e6 + 20;
int fa[N];
int cnt[N];
int ans;
int find(int x) {
	if (fa[x] == x) return x;
	else return fa[x] = find(fa[x]);
}
void hb(int x, int y) {
	if (find(x) != find(y)) {
		fa[find(x)] = find(y);
	}
	return ;
}
int main() {
	std::cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		fa[i] = i;
	}
	for (int i = 1; i <= m; i++) {
		int x, y;
		cin >> x >> y;
		hb(x, y);
	}
	for (int i = 1; i <= n; i++) {
		cnt[find(i)]++;
	}
	for (int i = 1; i <= n; i++) {
		if (cnt[i] == 0) ans++;
//		cout << cnt[i];
//		if(cnt[i]==0) return 0;
	}
	cout << ans;
	return 0;
}
