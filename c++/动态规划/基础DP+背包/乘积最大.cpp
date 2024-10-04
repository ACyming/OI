#include <bits/stdc++.h>
using namespace std;
int n, k, f[50][8], a[50][50];
char c[50];
int main() {
	cin >> n >> k;
	scanf("%s", c + 1);
	for (int i = 1; i <= n; i++)
		a[i][i] = c[i] - '0';
	for (int i = 1; i <= n; i++)
		for (int j = i + 1; j <= n; j++)
			a[i][j] = a[i][j - 1] * 10 + a[j][j];
	for (int i = 1; i <= n; i++)
		f[i][0] = a[1][i];
	for (int j = 1; j <= k; j++)
		for (int i = j + 1; i <= n ; i++)
			for (int l = j; l < i; l++)
				f[i][j] = max(f[i][j], f[l][j - 1] * a[l + 1][i]);
	cout << f[n][k];
	return 0;
}
