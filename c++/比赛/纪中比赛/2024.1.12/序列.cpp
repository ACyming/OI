#include <bits/stdc++.h>
using namespace std;
const int N = 2 * 1e5 + 20;
int n, a[N];
int main() {
	freopen("sequence.in", "r", stdin);
	freopen("sequence.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (n % 2 != 0) {
		for (int i = n; i >= 1; i -= 2) {
			cout << a[i] << " ";
		}
		for (int i = 2; i <= n; i += 2) {
			cout << a[i] << " ";
		}
	} else {
		for (int i = n; i >= 1; i -= 2) {
			cout << a[i] << " ";
		}
		for (int i = 1; i <= n; i += 2) {
			cout << a[i] << " ";
		}
	}
	return 0;
}
