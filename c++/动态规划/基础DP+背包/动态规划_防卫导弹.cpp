#include <bits/stdc++.h>
using namespace std;
int n, maxx, k, x, a[100001], b[100001], c[100001], t, i = 1;
int main() {
	while (cin >> a[i]) {
		maxx = 0;
		for (int j = 1; j <= i - 1; i++) {
			if (a[j] <= a[i]) {
				if (b[i] > maxx) {
					maxx = b[j];
				}
			}
			b[i] = maxx + 1;

		}
		if (b[i] > n) {
			n = b[i];
		}
		i++;
	}
	cout << n;
	return 0;
}
