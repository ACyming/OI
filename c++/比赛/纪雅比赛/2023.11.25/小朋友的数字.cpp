#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6 + 2;
long long n, p, maxx, h[N];
bool bz = 0;
struct ci {
	long long x, y, z;
} a[N];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> p;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i].x;
	}
	a[1].y = a[1].x;
	a[1].z = a[1].x;
	h[1] = a[1].x;
	for (long long i = 2; i <= n; i++) {
		h[i] = max(a[i].x, h[i - 1] + a[i].x);
		a[i].y = max(a[i - 1].y, max(h[i - 1] + a[i].x, a[i].x));
//		cout << a[i].y << " ";
	}
//	cout << endl;
	for (int i = 2; i <= n; i++) {
		if (!bz)
			a[i].z = max(a[1].y + a[1].z, a[i - 1].y + a[i - 1].z);
		if (bz)
			a[i].z = a[i - 1].y + a[i - 1].z;
		if (a[i].z > p) {
			bz = 1;
			a[i].z %= p;
		}
//		cout << a[i].z << " ";
	}
//	cout << endl;
//	ans = max(a[1].z, a[n].z);
	if (bz)
		cout << a[n].z % p;
	else
		cout << max(a[1].z, a[n].z) % p;
	return 0;
}
/*
10 711
907 -565 310 643 -111 -180 -426 -758 -901 253
 */
//explorer.exe
