#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 100;
int a[N];
int n,x;
int ans;
int main() {
//	freopen("dec.in","r",stdin);
//	freopen("dec.out","w",stdout);
	scanf("%d%d", &n,&x);
	for (int i = 1 ; i <= n ; i ++) {
		scanf("%d", &a[i]);
	}
	int l = 1, r = n, mid;
	for (int i = 1; i <= n; i++) {
		while (l <= r) {
			mid = (l + r) / 2;
			if (abs(a[i] - a[mid]) == x) {
				ans++;
			} else if (abs(a[i] - a[mid]) > x) {
				l = mid + 1;
			} else {
				r = mid - 1;
			}
		}
	}
	cout<<ans;
	return 0;
}
