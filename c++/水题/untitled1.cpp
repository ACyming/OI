#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b, c; //定义数组abc
	int p;//定义数组p
	cin >> a >> b >> c; //输入
	p = (a + b + c) / 2; //求p
	double ans = sqrt(p * (p - a) * (p - b) * (p - c)); //套公式,sqrt--->取平方根
	printf("%.1lf", ans); //输出，保留1位小数
	return 0;
}
