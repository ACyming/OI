#include <bits/stdc++.h>
using namespace std;
long long n, f[20];
int main() {
	cin >> n;
	f[1] = 1;
	for (int i = 2; i <= n; i++) {
		f[i] = f[i - 1] * (4 * i - 2) / (i + 1);
	}
	cout << f[n];
	return 0;
}
