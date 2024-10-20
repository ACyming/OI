#include <bits/stdc++.h>
using namespace std;
int n, m, k;
int a[100005], b[100005], c[100005];
int main () {
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a + 1, a + n + 1);
	for (int i = 1; i <= m; i++) {
		scanf("%d", &b[i]);
		int l = 1, r = n;
		while (l <= r) {
			int mid = l + (r - l) / 2;
			if (b[i] > a[mid]) {
				l = mid + 1;
			} else if (b[i] < a[mid]) {
				r = mid - 1;
			} else {
				c[k++] = b[i];
				break;
			}
		}
	}
	sort(c, c + k);
	for (int i = 0; i < k - 1; i++) {
		printf("%d ", c[i]);
	}
	printf("%d", c[k - 1]);
}
