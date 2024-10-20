#include <bits/stdc++.h>
using namespace std;
const int N = 10e6 + 200;
int n, m, a[50100];
int ans;
int main() {
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a + 1, a + 1 + n);
	int l = 1, r = n, mid = (l + r) / 2;
//	for (int i = 1; i <= n; i++) {
//		l = 1, r = n, mid = (l + r) / 2;
//		while (l <= r) {
//			mid = (l + r) / 2;
//			if (a[mid] + a[i] > m) {
//				r = mid - 1;
//			} else {
//				l = mid + 1;
//				ans++;
//			}
//		}
//	}
//	ans /= 2;
	for (int i = 1 ; i <= n - 1; i ++) {
		l = i + 1;
		r = n;
		while (l <= r) {
			mid = (l + r) / 2;
			if (a[i] + a[mid]<=m) {
				l = mid + 1;
			} else {
				r = mid - 1;
			}
		}
		if (r >= 1) ans = ans + (r - i);
	}
	printf("%d", ans);
	return 0;
}

