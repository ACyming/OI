#include <bits/stdc++.h>
using namespace std;
int dad[200000], ans;
int find(int xx) {
	if (dad[xx] != xx)
		dad[xx] = find(dad[xx]);
	return dad[xx];
}
void unio(int xx, int yy) {
	int f1 = find(xx);
	int f2 = find(yy);
	dad[f1] = f2;
}
int main() {
	int n, k, d, x, y;
	cin >> n >> k;
	for (int i = 1; i <= 3 * n; i++) {
		dad[i] = i;
	}
	while (k--) {
		cin >> d >> x >> y;
		if (x > n || y > n) {
			ans++;
			continue;
		}
		if (d == 2 && x == y) {
			ans++;
			continue;
		}
		if (d == 1) {
			if (find(y) == find(x + 2 * n) || find(x) == find(y + 2 * n)) {
				ans++;
				continue;
			}
			unio(x, y);
			unio(x + n, y + n);
			unio(x + 2 * n, y + 2 * n);
		} else {
			if (find(x) == find(y) || find(x) == find(y + 2 * n)) {
				ans++;
				continue;
			}
			unio(x + 2 * n, y);
			unio(x + n, y + 2 * n);
			unio(x, y + n);
		}
	}
	cout << ans;
}
