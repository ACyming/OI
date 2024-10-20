#pragma GCC optimize(2)
#include <bits/stdc++.h>
#define int long long
using namespace std;
int m;
int ans = 0x3f3f3f3f;
int a[(int)1e5 + 10];
int x, y, sum, maxx;
main() {
//	freopen("score.in", "r", stdin);
//	freopen("score.out", "w", stdout);
	cin >> m;
	for (int i = 1; i <= m; i++) {
		int n;
		cin >> n;
		sum += n;
		a[i] = n;
		a[i] += a[i - 1];
	}
	cin >> x >> y;
	for (int i = 1; i <= m; i++) {
		int	cnt = (a[m] - a[i-1]);
//		cout<<a[i].x<<endl
//		cout << cnt << endl;
		if (cnt >= x && cnt <= y && sum - cnt >= x && sum - cnt <= y && maxx < cnt) {
			ans = i;
			maxx = cnt;
		}
	}
	if (ans != 0x3f3f3f3f)
		cout << ans;
	else
		cout << 0;
	return 0;
}
/*
1 2 3 4 5
1 3 6 10 15
*/
