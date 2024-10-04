#include <bits/stdc++.h>
using namespace std;
__int128 n, m;
__int128 a[100][100];
__int128 ans;
__int128 f[100][100];
__int128 read()
{
	__int128 x = 0;
	char c = getchar();
	while (c < 48 || c > 57)
		c = getchar();
	while (c > 47 && c < 58)
		x = (x << 1) + (x << 3) + c - 48, c = getchar();
	return x;
}
void write(__int128 x)
{
	if (x > 9)
		write(x / 10);
	putchar(x % 10 + 48);
}
int main()
{

	n = read();
	m = read();
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			a[i][j] = read();
	for (int i = 1; i <= n; i++)
	{
		memset(f, 0, sizeof(f));
		for (int j = 0; j <= m; j++)
			for (int k = 1; k + j <= m; k++)
				f[k][k + j] = max(f[k + 1][k + j] * 2 + a[i][k] * 2, f[k][j + k - 1] * 2 + a[i][j + k] * 2);
		ans += f[1][m];
	}
	write(ans);
	return 0;
}