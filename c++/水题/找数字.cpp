#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 100;
int a[N], p;
void find(int l, int r, int x) {
	int mid;
	while (l <= r) {
		mid = (l + r) / 2;
		if (a[mid] == x) {
			printf("Y");
			return ;
		} else if (a[mid] < x) {
			l = mid + 1;
		} else {
			r = mid - 1;
		}
	}
	printf("N");
	return ;
}
int main() {
	int n, x;
	scanf("%d", &n);
	for (int i = 1 ; i <= n ; i ++) {
		scanf("%d", &a[i]);
	}
	sort(a + 1, a + 1 + n);
	scanf("%d", &p);
	while (p--) {
		scanf("%d", &x);
		find(1, n, x);
		printf(" ");
	}


	return 0;
}
