#include <bits/stdc++.h>
using namespace std;
int n, k;
int main() {
	int s, e;
	while (cin >> n && n != 0) {
		cin >> k;
		s = pow(2, k - 1);
		e = pow(2, k) - 1;
		if (s > n) cout << "EMPTY";
		else
			for (int i = s; i <= min(e, n); i++) {
				cout << i;
			}
	}
	return 0;
}
