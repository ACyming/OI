#include <bits/stdc++.h>
using namespace std;
int n, m, f[50][50];
int main() {
	cin >> n >> m;
	f[1][0] = 1;
	for (int j = 1; j <= m; j++) {
		for (int i = 1; i <= n; i++) {
			if (i - 1 != 0 && i + 1 != n + 1)
				f[i][j] = f[i - 1][j - 1] + f[i + 1][j - 1];
			else if (i - 1 == 0 && i + 1 != n + 1)
				f[i][j] = f[n][j - 1] + f[i + 1][j - 1];
			else if (i - 1 != 0 && i + 1 == n + 1)
				f[i][j] = f[i - 1][j - 1] + f[1][j - 1];
		}
	}
	cout<<f[1][m];
	return 0;
}
