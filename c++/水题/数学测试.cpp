#include <bits/stdc++.h>
using namespace std;
const long long int  N = 1e5+10;
long long int n, a[N], m, ans[N];
struct xy {
	long long int x;
	long long int y;
};
xy b[N];
int main() {
	long long int x, y, z;
	scanf("%lld", &n);
	for (long long i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
		b[i].x = b[i - 1].x + a[i];
	}
	scanf("%lld", &m);
	sort(a + 1, a + 1 + n);
	for (long long i = 1; i <= n; i++) {
		b[i].y = b[i - 1].y + a[i];
	}
	for (long long i = 1; i <= m; i++) {
		scanf("%lld%lld%lld", &x, &y, &z);
		if (x == 1)
			ans[i] = b[z].x - b[y - 1].x;
		else if(x==2)
			ans[i] = b[z].y - b[y - 1].y;
	}
	for (long long i = 1; i <= m; i++) {
		printf("%lld\n", ans[i]);
	}
	return 0;
}
