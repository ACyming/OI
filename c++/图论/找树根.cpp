#include <bits/stdc++.h>
using namespace std;
int n, fa[1020], a[1010];
int main() {
	int x, y;
	cin >> n;
	for (int i = 1; i < n; i++) {
		cin >> x >> y;
		fa[y] = x;
		a[x]++;
	}
	int maxx = 0;
	for (int i = 1; i <= 1000; i++) {
		if (!fa[i] && a[i])
			cout << i << endl;
		if (a[i] >= a[maxx]) maxx = i;
	}
	cout << maxx << endl;
	for (int i = 1; i <= 1000; i++)
		if (fa[i] == maxx) cout << i << " ";
	return 0;
}
