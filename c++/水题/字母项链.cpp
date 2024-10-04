#include <bits/stdc++.h>
using namespace std;
string s;
long long a[1000200], x, b[1000200], ma;
int main() {
	cin >> s;
	int l = s.size();
	for (int i = 0; i <= l; i++) {
		a[i + 1] = (s[i] - 'A' + 1);
		a[i + 1 + l] = a[i + 1];
	}
	for (int i = 1; i <= l; i++) {
		x += a[i] * i;
	}
	for (int i = 1; i <= l * 2; i++) {
		b[i] = a[i] + b[i - 1];
	}
	ma = x;
	for (int i = 2; i <= l; i++) {
		x = x - (b[i] + l - 2 - b[i - 1]) + (l - 1) * a[i - 1];
		ma = max(ma, x);
	}
	cout << ma;
	return 0;
}

