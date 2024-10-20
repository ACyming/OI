#include <bits/stdc++.h>
using namespace std;
const int N = 2.3e5 + 100;
int s[N];
int n, m, x;
bool check(int mid) {
	for (int i = 1; i <= n - mid + 1; i++) {
		if (s[i + mid - 1] - s[i - 1] >= m)
			return true;
	}
	return false;
}
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		s[i] = s[i - 1] + x;
	}
	if (m > s[n]) {
		cout << 0 << endl;
		return 0;
	}
	int mid, l = 1, r = n;
	while (l <= r) {
		mid = (l + r) / 2;
		if (check(mid))
			r = mid - 1;
		else
			l = mid + 1;
	}
	cout << l;
	return 0;
}
