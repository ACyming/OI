#include <bits/stdc++.h>
using namespace std;
int n, m;
int s[10020], l[10020];
bool check(int x) {
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		cnt = cnt + (l[i] / x) * s[i];
	}
	return cnt >= m;
}
int main() {
	cin >> n >> m >> l[1] >> s[1];
	int maxx = l[1];
	for (int i = 2; i <= n; i++) {
		l[i] = ((l[i - 1] * 37011 + 10193) % 10000) + 1;
		s[i] = ((s[i - 1] * 73011 + 24793) % 100) + 1;
		maxx = max(maxx, l[i]);
	}
	int l = 0, r = maxx, mid;
	while (l <= r) {
		mid = (l + r) / 2;
		if (check(mid)) {
			l = mid + 1;
		} else {
			r = mid - 1;
		}

	}
	cout << r;
	return 0;
}
