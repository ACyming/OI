#pragma GCC optimize(2)
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
int q[20], a[20], b[20];
int u[20];
int ans;
bool pd() {
	for (int i = 1; i <= n; i++) {
		if (q[i] < u[i])
			return 0;
	}
	return 1;
}
main() {
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> q[i];
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) cin >> b[i];//输入
	int x = 0x3f3f3f3f, y = 0x3f3f3f3f;
	for (int i = 1; i <= n; i++) {
		if (b[i] != 0 && a[i] != 0 && q[i] / a[i] != 0 && q[i] / b[i] != 0)
				x = min(q[i] / a[i], x),y = min(q[i] / b[i], y);
		if (x > 0 && y > 0)
			break;//计算A,B可做菜的最大值
	}
//	cout << x << " " << y;
	for (int i = 1; i <= x; i++) {//暴力枚举
		for (int j = 1; j <= y; j++) {//暴力枚举
//			cout << i << " " << j << endl;
			for (int k = 1; k <= n; k++)//暴力枚举
				u[k] += a[k] * i + b[k] * j;
			if (pd()) {//判断
				ans = max(ans, i + j);
			} else {
				break;//可以加快运行速度？
			}
		}
	}
	cout << ans;
	return 0;
}
