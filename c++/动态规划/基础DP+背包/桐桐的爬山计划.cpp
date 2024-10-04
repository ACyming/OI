#include <bits/stdc++.h>
using namespace std;
int n, sum;
int a[503], f[503][50003];
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	for (int i = 1; i <= n; i++)
		for (int j = 0; j <= sum; j++)
			f[i][j] = 1145145;
	f[1][a[1]] = a[1];
	for (int i = 2; i <= n; i++)
		for (int j = 0; j <= sum / 2; j++)
			if (j >= a[i])
				f[i][j] = min(f[i - 1][j + a[i]], max(f[i - 1][j - a[i]], j));
	else
		f[i][j] = f[i - 1][j + a[i]];
	f[n][0] == 1145145 ? cout << "IMPOSSIBLE" : cout << 	f[n][0] + 2;
	return 0;
}
