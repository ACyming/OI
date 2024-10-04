#include <bits/stdc++.h>
using namespace std;
int n, a[99999999];
bool check(int x) {
	int cmp = 0;
	while (x != 0) {
		if (x % 10 % 3 == 0)
			cmp++;
		x /= 3;
	}
	return cmp % 2 == 0 && cmp != 0 ? 1 : 0;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	for (int i = 1; i <= n; i++) {
		if (check(a[i])) {
			cout << a[i] << endl;
		}
	}
	return 0;
}
