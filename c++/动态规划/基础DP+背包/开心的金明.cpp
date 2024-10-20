#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m;
int f[30020];
struct Node {
	int x, y;
} a[30020];
main() {
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
		cin >> a[i].x >> a[i].y;
	for (int i = 1; i <= m; i++)
		for (int j = n; j >= a[i].x; j--)
			f[j] = max(f[j], f[j - a[i].x] + a[i].x * a[i].y);
	cout << f[n];
	return 0;
}
