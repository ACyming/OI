#include <bits/stdc++.h>
using namespace std;
long long t;
long long a, b, c;
int bl() {
	long long ans = 0, y = 0;
	for (long long x = 1;; x++) {
		if (c - a * x < 0) {
			if (c % b == 0)ans++;
			return ans;
		} else {
			y = (c - a * x) / b;
			if (b * y + x * a == c ) {
				ans++;
//				cout << x << " " << y << endl;
			}
		}
	}
}
int main() {
	cin >> t;
	for (long long i = 1; i <= t; i++) {
		cin >> a >> b >> c;
		cout << bl() << endl;
	}
	return 0;
}
//设吃aX个，bY个
//则 ax+by=c
//求x,y有多少组解

/*
3x+4y=24
x=4 y=3
x=
*/
