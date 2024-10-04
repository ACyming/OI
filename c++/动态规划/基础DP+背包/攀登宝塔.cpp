#include <bits/stdc++.h>
using namespace std;
int n;
int k[1000010], a[1000010], b[1000010];
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> k[i];
	}
	for (int i = 1; i <= n + 1; i++) {
		a[i] = min(b[i - 1], b[i - 2]);
		b[i] = min(b[i - 1], a[i - 1]) + k[i];
	}
	cout << min(min(a[n], a[n + 1]), b[n]);
	return 0;
}
