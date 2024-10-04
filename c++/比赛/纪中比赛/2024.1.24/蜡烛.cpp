#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 20;
int n, m;
int a[N], sum;
void dg(int l, int r) { /*枚举时间范围*/
	int mid = (l + r) / 2;
	int cnt = 1/*点燃的蜡烛的数量*/, t = 0/*目前最小时间*/;
	for (int i = 2; i <= n; i++) {
		t += a[i];//将时间+目前蜡烛点燃的时间
		if (t > mid) {//如果t大于目前的时间最小值，必须点燃这一个蜡烛
			if (cnt < m) cnt++, t = 0;//点蜡烛
			else {
				if (r == l) return ;//如果时间重合，返回上一层
				else if (l + 1 == r) dg(mid + 1, r);//防止mid卡循环，例：l=1,r=2,mid=1会卡死循
				else dg(mid, r);//没问题，继续分治
				return ;//返回
			}
		}
	}
	sum = mid;//将答案储存
	if (l == r)
		return ;//同上
	dg(l, mid - 1);//继续分治
}
main() {
	freopen("d.in", "r", stdin);
	freopen("d.out", "w", stdout);
	cin >> n/*蜡烛编号*/ >> m/*可以点亮m个蜡烛*/;
	for (int i = 1; i <= n; i++)
		cin >> a[i]/*输入*/, sum += a[i]/*使用sum进行计数*/;
	dg(1, sum - a[1]/*第一个蜡烛必点，所以sum-a[1]*/);
	cout << sum;
	return 0;
}
