#include <bits/stdc++.h>
using namespace std;
long long n, p, maxx = -999999, ans = -99999;
struct ci {
	long long x, y, z;
} a[1000009];
int main() {
	freopen("number.in", "r", stdin);
	freopen("number.out", "w", stdout);
	scanf("%lld%lld", &n, &p);
	for (long long i = 1; i <= n; i++) {
		scanf("%lld", &a[i].x);
	}
	for (long long i = 1; i <= n; i++) {
		for (long long j = i; j >= 1; j--) {
			if (maxx < 0)
				maxx = max(maxx, a[j].x);
			else
				maxx = max(maxx, maxx + a[j].x);
		}
		if (maxx == 0) {
			for (long long j = i; j >= 1; j--) {
				maxx = max(maxx, a[j].x);
			}
		}
		a[i].y = maxx;
		maxx = -99999;
//		cout << a[i].y << " ";
	}
//	cout << endl;
	a[1].z = a[1].y;
	maxx = -99999;
	ans = a[1].z;
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			maxx = max(maxx, a[j].y + a[j].z);
		}
		a[i].z = maxx;
		maxx = -99999;
//		cout << a[i].z << " ";
		ans = max(ans, a[i].z);
	}
	if (ans > 0)
		printf("%lld", abs(ans) % p);
	else
		printf("-%lld", abs(ans) % p);
	return 0;
}
