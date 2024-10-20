#include <bits/stdc++.h>
using namespace std;
struct gg {
	int a, b;
} w[5020];
bool cmp(gg x, gg y) {
	return x.a < y.a;
}
int n, a[5020], b[5020], c, d, ans = 0, maxx = 0;
int main() {
	cin >> n;   
	for (int i = 1; i <= n; i++) {
		cin >> w[i].a >> w[i].b;
	}
	sort(w + 1, w + n + 1, cmp);
	c = w[1].a, d = w[1].b, maxx = w[1].b - w[1].a;
	for (int i = 2; i <= n; i++) {
		if (w[i].a <= d && w[i].b > d) {
			d = w[i].b;
			maxx = max(maxx, d - c);
		} else {
			if (w[i].a > d) {
				maxx = max(maxx, d - c);
				ans = max(ans, w[i].a - d);
				c = w[i].a, d = w[i].b;
			}
		}
	}
	cout << maxx << " " << ans;
	return 0;
}
