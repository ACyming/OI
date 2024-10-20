#include <bits/stdc++.h>
using namespace std;
int n;
int a[360]/*输入数据（后期也用于前缀和）*/, dp[360][360]/*dp数组，dp[i][j]i~j后内代价最小*/;
int main() {
	cin >> n;
	memset(dp, 0x3f, sizeof(dp));
	for (int i = 1; i <= n; i++)
		cin >> a[i]/*输入a[]*/, a[i] += a[i - 1]/*前缀和计算->a[x]=a[x]+a[x-1]*/;
	for (int i = 1; i <= n; i++) dp[i][i] = 0;//进行从自己到自己的代价为0的设置
	for (int len = 2; len <= n; len++)//枚举区间长度
		for (int i = 1; i + len - 1 <= n; i++) { //枚举起点
			int j = i + len - 1;//手动计算终点
			for (int k = i; k < j; k++)//遍历区间
				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + a[j] - a[i - 1]/*利用前缀和快速计算j~i-1的值*/);//板子
			//           和自己比较   i~j在dp中的范围          加上前缀和
		}
	cout << dp[1][n]/*进行输出*/;
	return 0;
}
