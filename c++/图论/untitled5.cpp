#include <bits/stdc++.h>
using namespace std;
int x, y, n, k, ans;
struct ct {
	int a, b;
} f[30030];
int main() {
	cin >> x >> y >> n >> k;
	x += 10000;
	y += 10000;
	for (int i = 1; i <= n; i++) {
		cin >> f[i].a >> f[i].b;
		f[i].a += 100000;
		f[i].b += 100000;
	}
	for (int i = 1; i <= n; i++) {
		if (abs(x - f[i].a) + abs(y - f[i].b) == k) {
			ans++;
		}
	}
	cout << ans << endl;
	for (int i = 1; i <= n; i++) {
		if (abs(x - f[i].a) + abs(y - f[i].b) == k) {
			cout << f[i].a - 10000 << " " << f[i].b - 10000 << endl;
		}
	}
	return 0;
}
