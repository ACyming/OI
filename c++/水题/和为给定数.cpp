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
	sort(a + 1, a + 1 + n);
	for (int i = 1; i <= n; i++) {
		int l = 1, r = n, mid;
		while (l <= r) {
			mid = (l + r) / 2;
			if (a[mid] + a[i] == x) {
				printf("%d %d", a[i],a[mid]);
				return 0;
			} else if (a[mid] + a[i] < x) {
				l = mid + 1;
			} else {
				r = mid - 1;
			}
		}
	}
	cout<<"No";
	return 0;
}

