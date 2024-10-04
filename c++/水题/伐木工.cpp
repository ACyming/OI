#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e6 + 10;
ll a[N], n, m, maxx;
bool check(ll h) {
	ll s = 0, i;
	for (i = 1 ; i <= n ; i ++) {
		if (a[i] > h) {
			s += a[i] - h;
			if (s >= m) return true;
		}
	}
	return s >= m;
}
int main() {
	scanf("%lld%lld", &n, &m);
	for (int i = 1 ; i <= n ; i ++) {
		scanf("%lld", &a[i]);
		maxx = max(maxx, a[i]);
	}	
	ll l = 0, r = maxx, mid;
	while (l <= r) {
		mid = (l + r) / 2;
		if (check(mid)) {
			l = mid + 1;
		} else {
			r = mid - 1;
		}
	}
	printf("%lld", r);
	return 0;
}

