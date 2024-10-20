#include <bits/stdc++.h>
using namespace std;
int n, x, a[10020], t[10020], maxx, p;
int main() {
	cin >> n;
	for (int i = 2; i <= n; i++) {
		cin >> x;
		a[i] = x;
	}
	for (int i = 1; i <= n; i++)
		if (a[a[i]] != 0 && a[i] != 0)
			t[a[a[i]]]++;
	for (int i = 1; i <= n; i++) {
		if (t[i] > maxx) {
			maxx = t[i];
			p = i;
		}
	}
	cout << p <<" "<< maxx;
	return 0;
}
