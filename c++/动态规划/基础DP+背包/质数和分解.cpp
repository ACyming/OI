#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int n;
int f[220][220];
int pr[47];
int cnt;
bool pp(int x) {
	for (int i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) return 0;
	}
	return 1;
}
int main() {
	cin >> n;
	f[0][0] = 1;
	for (int i = 2; i <= n; i++) {
		if (pp(i)) cnt++, pr[cnt] = i;
	}
	for (int i = 1; i <= cnt; i++)
		for (int j = 0; j <= n; j++)
			for (int k = 0; pr[i]*k <= j; k++)
				f[i][j] += f[i - 1][j - pr[i] * k];
	cout << f[cnt][n];
	return 0;
}
