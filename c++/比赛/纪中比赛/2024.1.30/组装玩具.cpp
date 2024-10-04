#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m;
int ans = INT_MAX;
int a[1000001], b[1000001];
int x, y;
main() {
	freopen("toy.in", "r", stdin);
	freopen("toy.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i], x += a[i];//输入
	for (int i = 1; i <= n; i++) {
		cin >> b[i], y += b[i];//输入
		ans = min(ans, a[i] / b[i]);//计算不用万能零件时的最多可以组装的玩具
	}
	for (int i = 1; i <= n; i++) {
		a[i] -= ans * b[i];//a[]减去用过的
		x -= ans * b[i];//a[]总和也减去用过的
	}
	while (m > 0) {//如果还有万能零件：
		for (int i = 1; i <= n; i++) {
			if (a[i] >= b[i]) {//当a[i]还够在做一个b[i]
				a[i] -= b[i];//使用它
				x -= a[i];
			} else if (b[i] - a[i] <= m) {//当a[i]使用万能零件时还够再做一个b[i]
				m -= (b[i] - a[i]);//使用它
				x -= a[i];
				a[i] = 0;
			} else {
				cout << ans;//如果前两个式子都不成立，输出
				return 0;
			}
		}
		ans++;//方案++
		if (x == 0) {//如果x用完了！
			cout << ans + m / y;//输出我当前最多用掉万能零件还可以做的玩具
			return 0;
		}
	}
	cout << ans;//输出
	return 0;
}
