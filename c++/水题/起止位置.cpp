#include <bits/stdc++.h>
using namespace std;
int n, q, a[12000], x;
int find1(int l, int r, int x) {
	int m = (l + r) / 2;
	while (l <= r) {
		m = (l + r) / 2;
		if (a[m] >= x) {
			r = m - 1;
		} else {
			l = m + 1;
		}
	}
	return l >= 1 && l <= n && a[l] == x ? l : -1;
}
int find2(int l, int r, int x) {
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
	scanf("%d%d", &n, &q);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	while (q--) {
		scanf("%d", &x);
		printf("\n%d %d\n", find1(1, n, x), find2(1, n, x));
	}
	return 0;
}
