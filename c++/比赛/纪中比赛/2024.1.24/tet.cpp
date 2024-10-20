#include <bits/stdc++.h>
#define int long long
int x, z;
using namespace std;
main() {
//	freopen("c.in", "r", stdin);
//	freopen("c.out", "w", stdout);
	while (1) {
		cin >> x >> z;
		for (int y = 1;; y++) {
			if (x * y / __gcd(x, y) == z) {
				cout << y;
				break;
			}
		}
		_sleep(1500);
		system("CLS");
	}
	return 0;
}
