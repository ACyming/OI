#include <bits/stdc++.h>
using namespace std;
long long n;
long long a[40];
int main() {
	cin >> n;
	a[1] = 3;
	a[2] = 9;
	for (long long i = 3; i <= n; i++)
		a[i] = a[i - 1] * 2 + a[i - 2];
	cout << a[n];
	return 0;
}
