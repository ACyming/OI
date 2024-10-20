#include <bits/stdc++.h>
using namespace std;
const int N = 3 * 1e5 + 20;
int n, x;
int a[N], f[N];
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] != -1)
			f[a[i]] = i;
		else {
			cout << i << " ";
			x = i;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (f[x] != 0)
			cout << f[x] << " ";
		x = f[x];
	}
	return 0;
}
