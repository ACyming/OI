#include <bits/stdc++.h>
using namespace std;
int a[110];
int main() {
	int n, x = 0, y = 0;
	cin >> n;
	for (int i = 1; i < n; i++) {
		cin >> x >> y;
		a[x]++;
		a[y]++;

	}
	for (int i = 1; i <= n; i++) {
		if (i == 1) cout << a[i] << " ";
		else cout << a[i] - 1 << " ";
	}
	return 0;
}
