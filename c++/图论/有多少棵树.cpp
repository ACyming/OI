#include <bits/stdc++.h>
using namespace std;
int fa[120], n, k, x, y;
int main() {
	cin >> n >> k;
	for (int i = 1; i <= k; i++) {
		cin >> x >> y;
		fa[y] = x;

	}
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (fa[i] == 0) cnt++;
	}
	cout << cnt << endl;
	for (int i = 1; i <= n; i++) {
		if (fa[i] == 0) cout << i << " ";
	}
}
