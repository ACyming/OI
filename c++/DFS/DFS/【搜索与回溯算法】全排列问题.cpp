#include <bits/stdc++.h>
using namespace std;
int n, s, a[12], b[100];
void hs(int x) {
	if (x == n + 1) {
		for (int i = 1; i < x; i++) {
			cout << setw(5) << b[i];
		}
		cout << endl;
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (a[i] == 0) {
			a[i] = 1;
			b[x] = i;
			hs(x + 1);
			a[i] = 0;
		}
	}
	return;
}
int main() {
	cin >> n;
	hs(1);
	return 0;
}
