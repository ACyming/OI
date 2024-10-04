#include <bits/stdc++.h>
using namespace std;
int n;
int q[50], a[50], b[50], u[50];
int ans;
int aa = 0x3f3f3f3f, bb;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> q[i];//输入
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] != 0 && q[i] / a[i] < aa) {
			aa = q[i] / a[i];//计算A最多可以做食物的数量
		}
	}
	for (int i = 1; i <= n; i++)
		cin >> b[i];
	for (int i = 0; i <= aa; i++) {
		bb = 0x3f3f3f3f;//初始化bb
		for (int j = 1; j <= n; j++)
			if (b[j] != 0 && bb > ((q[j] - (a[j]*i)) / b[j]))
				bb = (q[j] - (a[j] * i)) / b[j];//循环计算出B最多可以做食物的数量
		ans = max(ans, i + bb);//求ans
	}
	cout << ans;
	return 0;
}
