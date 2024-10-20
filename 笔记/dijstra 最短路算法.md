# dijstra 最短路算法

![image-20231201193848346](C:\Users\Administrator\AppData\Roaming\Typora\typora-user-images\image-20231201193848346.png)



![image-20231201194902794](C:\Users\Administrator\AppData\Roaming\Typora\typora-user-images\image-20231201194902794.png)

**代码核心流程**
    **1：初始化**
    **d[]:无穷大，0x3f3f3f3f INT_MAX**
    **f[]:标记哪些点已确定，false 未确定**

​	**2：求最短路**
​	**(1),在未确定的点中，找离出发点最近的点，标记为不可更新**
​	**(2),从该点出发，尝试更新到邻接点的距离**

​	**3：使用场景**
​	**边权可以不相等，但不可以为负数**
​	**时间复杂度O(n^2)**



## 最短路径(dijstra)

````c++	
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
````

## 最短距离和路径问题(dijstra)邻接矩阵

````c++
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 20;
int n, m, s, t;
int a[N][N];
int d[N], pre[N];
bool f[N];
void print(int x) {
	if (x != s) print(pre[x]);
	cout << x << " ";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m >> s >> t;
	int x, y, l;
	for (int i = 1; i <= m; i++) {
		cin >> x >> y >> l;
		if (a[x][y] == 0 || l < a[x][y]) {
			a[x][y] = a[y][x] = l;
		}
	}
	memset(d, 0x3f, sizeof(d));
	d[s] = 0;
	for (int i = 1; i <= n; i++) {
		int mi = -1;
		for (int j = 1; j <= n; j++) {
			if (!f[j] && (mi == -1 || d[mi] > d[j]))
				mi = j;
		}
		f[mi] = 1;
		for (int j = 1; j <= n; j++) {
			if (!f[j] && a[mi][j] != 0 && d[j] > d[mi] + a[mi][j]) {
				d[j] = d[mi] + a[mi][j];
				pre[j] = mi;
			}
		}
	}
	if (d[t] == 0x3f3f3f3f) {
		cout << "can't arrive";
		return 0;
	} else {
		cout << d[t] << endl;
		print(t);
	}
	return 0;
}
````

## 最短距离和路径问题(dijstra)邻接矩阵

````c++
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 20, M = 1e4 + 10;
int n, m, s, t, k;
int d[N], pre[N];//pre[]->链表头
bool f[N];
int r[N];//前驱结点
struct Node {
	int v, next, l;
} a[M * 2];
void add(int u, int v, int l) {
	a[++k] = {v, pre[u], l};
	pre[u] = k;
}
void print(int x) {
	if (x != s) print(r[x]);
	cout << x << " ";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m >> s >> t;
	int x, y, l;
	for (int i = 1; i <= m; i++) {
		cin >> x >> y >> l;
		add(x, y, l), add(y, x, l);
	}
	memset(d, 0x3f, sizeof(d));
	d[s] = 0;
	for (int i = 1; i <= n; i++) {
		int mi = -1;
		for (int j = 1; j <= n; j++) {
			if (!f[j] && (mi == -1 || d[mi] > d[j]))
				mi = j;
		}
		f[mi] = 1;
		for (int j = pre[mi]; j; j = a[j].next) {
			int to = a[j].v;
			if (!f[to] && d[to] > d[mi] + a[j].l) {
				d[to] = d[mi] + a[j].l;
				r[to] = mi;
			}
		}
	}
	if (d[t] == 0x3f3f3f3f) {
		cout << "can't arrive";
		return 0;
	} else {
		cout << d[t] << endl;
		print(t);
	}
	return 0;
}
````

