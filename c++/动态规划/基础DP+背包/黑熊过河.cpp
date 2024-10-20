#include <bits/stdc++.h>
using namespace std;
int p, q, n;
int a[100020];
int f[100020];
int main() {
	cin >> f[0] >> q;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
//	f[-1]
	for (int i = 1; i <= n + 1; i++) {
		if (f[i - 1] < q && f[i - 2] < q) {
			cout << "NO";
			return 0;
		}
		f[i] = max(f[i - 1] - q, f[i - 2] - q) + a[i];
	}
//	if (f[n + 1] == -1) cout << "NO", exit(0);
	cout << f[n + 1];
	return 0;
}
