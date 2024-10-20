#include <bits/stdc++.h>
using namespace std;
int n;
int a[11000];
int main() {
	cin >> n;
	a[1] = 1;
	for (int i = 2; i <= n; i++) {
		a[i] = 2 * a[i - 1] + 1;
	}
	cout << a[n];
	return 0;
}
