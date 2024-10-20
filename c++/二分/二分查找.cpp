#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 100;
int a[N];
int main() {

	int n, x;
	scanf("%d", &n);
	for (int i = 1 ; i <= n ; i ++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &x);
	int l = 1, r = n, mid;
	while (l <= r) {
		mid = (l + r) / 2;
		if (a[mid] == x) {
			printf("%d", mid);
			return 0;
		} else if (a[mid] < x) {
			l = mid + 1;
		} else {
			r = mid - 1;
		}
	}
	printf("%d", -1);
	return 0;
}
