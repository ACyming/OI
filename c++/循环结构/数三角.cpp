#include <bits/stdc++.h>
using namespace std;
long long  n, m, s;
int main() {
	cin >> n >> m;
	while (n != 0 && m != 0) {
		s += (n * m);
		n--;
		m--;
	}
	cout << s * 2;
	return 0;
}
