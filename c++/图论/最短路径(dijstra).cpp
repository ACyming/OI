#include <bits/stdc++.h>
using namespace std;
int n, s;
int a[60][60], d[60]; //出发点到的最短距离，记录当前的点是否被确定初始：未确定
bool f[60];
int main() {
	/*
	  代码核心流程
	  1：初始化
	  d[]:无穷大，0x3f3f3f3f INT_MAX
	  f[]:标记哪些点已确定，false 未确定

	  2：求最短路
	  (1),在未确定的点中，找离出发点最近的点，标记为不可更新
	  (2),从该点出发，尝试更新到邻接点的距离

	  3：使用场景
	  边权可以不相等，但不可以为负数
	  时间复杂度O(n^2)
	 */
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> s;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++) cin >> a[i][j];
	//1.初始化
	memset(d, 0x3f, sizeof(d));
	d[s] = 0;
	//2.一共要更新n个点
	for (int i = 1; i <= n; i++) {
		//从未确定的点中找最短路径的点
		int mi = -1;//不能设为一，记录最小长度结点的下标
		for (int j = 1; j <= n; j++) {
			//1.未确定的点，2.第一次查找时（前提：未确定的点）
			if (!f[j] && (mi == -1 || d[j] < d[mi])) {
				mi = j;
			}
		}
		f[mi] = 1;
		for (int j = 1; j <= n; j++) {
			//距离更短
			if (!f[j] && d[j] > d[mi] + a[mi][j] && a[mi][j] != 0) {
				d[j] = d[mi] + a[mi][j];
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		if (i != s) {
			if (d[i] == 0x3f3f3f3f) cout << -1 << " ";
			else cout << d[i] << " ";
		}
	}
	return 0;
}
