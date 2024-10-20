#include <bits/stdc++.h>
using namespace std;
const int  N = 99999;
int b[N];
bool pd(int x) {
	return sqrt(x) == int(sqrt(x));
}
int main() {
	int n, k, l, r, s, c = 0;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		b[i] = b[i - 1] + i;
	}
	for (int i = 1; i <= n - k + 1; i++) {
		l = i;
		r = i + k - 1;
		s = b[r] - b[l - 1];
		if (pd(s)) {
			c++;
		}
	}
	cout << c;
	return 0;
}
