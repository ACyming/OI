#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
int a[120], f[120];
main() {
	for (int i = 1; i <= 10; i++) {
		cin >> a[i];
	}
	cin >> n;
	for (int i = 1; i <= n; i++)
		f[i] = INT_MAX;
	f[0] = 0;
	for (int i = 1; i <= 10; i++) {
		for (int j = i; j <= n; j++) {
			f[j] = min(f[j - i] + a[i],f[j]);
		}
	}
	cout << f[n];
	return 0;
}
