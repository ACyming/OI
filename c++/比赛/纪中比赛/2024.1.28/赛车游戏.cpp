#pragma GCC optimize(2)
#include <bits/stdc++.h>
#define D long double
using namespace std;
D t;
int n, l;
int a[(int)1e5 + 10];
D ans;
main() {
	freopen("car.in", "r", stdin);
	freopen("car.out", "w", stdout);
	cin >> t;
	while (t--) {
		cin >> n >> l;
		ans = 0.0;
		memset(a, 0, sizeof(a));
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		D ta = 0/*a的位置*/, tb = l/*b的位置*/;
		D sa = 1/*a的速度*/, sb = 1/*b的速度*/;
		int ja = 1/*距离a最近的加速站*/, jb = n/*距离b最近的加速站*/;
		while (ja <= jb) {
			if ((a[ja] - ta) / sa < (tb - a[jb]) / sb) {
				tb -= (a[ja] - ta) / sa * sb;
				ans += (a[ja] - ta) / sa;
				ta = a[ja];
				sa++;
				ja++;
			} else {
				ta += (tb - a[jb]) / sb * sa;
				ans += (tb - a[jb]) / sb;
				tb = a[jb];
				sb++;
				jb--;
			}
		}
		ans += ((tb - ta) / (sa + sb));
		printf("%.15Lf\n", ans);
	}
	return 0;
}
