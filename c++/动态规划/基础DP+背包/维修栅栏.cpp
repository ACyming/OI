#include <bits/stdc++.h>
using namespace std;
int n;
double a[2520], f[2520];
double ans = INT_MAX;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		f[i] = INT_MAX;
	}
	for (int i = 1; i <= n; i++) {
		if (a[i] != 0) f[i] = f[i - 1];
		for (int j = 1; j <= i; j++) {
			f[i] = min(f[i], f[j - 1] + sqrt(i - j + 1));
		}
	}
	printf("%.3lf", f[n]); 
	return 0;
}
