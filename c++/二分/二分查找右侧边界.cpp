#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 100;
int a[N], n;
int find(int l, int r, int x) {
	int m = (l + r) / 2;
	while (l <= r) {
		m = (l + r) / 2;
		if (a[m] <= x) {
			l = m + 1;
		} else {
			r = m - 1;
		}
	}
	return r >= 1 && r <= n && a[r] == x ? r : -1;
}
int main() {
	scanf("%d", &n);
	for (int i = 1 ; i <= n ; i ++) {
		scanf("%d", &a[i]);
	}
	int q, x;
	scanf("%d", &q);
	while (q --) {
		scanf("%d", &x);
		printf("%d ", find(1, n, x));
	}
	return 0;
}
