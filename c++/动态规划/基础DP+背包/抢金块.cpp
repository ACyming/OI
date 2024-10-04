#include <bits/stdc++.h>
using namespace std;
int n, s, t;
int a[1200], f[1200];
int main() {
	cin >> n >> s >> t;
	for (int i = 1; i <= n; i++) cin >> a[i];
	f[1] = a[1];
	for (int i = 1; i <= n; i++)
		for (int j = s; j <= t; j++)
			if (i - j > 0)f[i] = max(f[i], f[i - j] + a[i]);
	cout << f[n];
	return 0;
}
