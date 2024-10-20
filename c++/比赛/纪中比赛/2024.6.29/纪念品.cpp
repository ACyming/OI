#include <bits/stdc++.h>
using namespace std;
int p[105][105], t, n, m, f[1000000], ans;
inline unsigned read()
{
	unsigned x = 0;
	char c = getchar();
	while (c < '0' || c > '9')
		c = getchar();
	while (c >= '0' && c <= '9')
	{
		x = x * 10 + (c - '0');
		c = getchar();
	}
	return x;
}
int main()
{
#ifdef ONLINE_JUDGE
	freopen("souvenir.in", "r", stdin);
	freopen("souvenir.out", "w", stdout);
#endif
	t = read();
	n = read();
	m = read();
	for (int i = 1; i <= t; i++)
		for (int j = 1; j <= n; j++)
			p[i][j] = read();
	for (int k = 1; k < t; k++)
	{
		memset(f, 0, sizeof(f));
		for (int i = 1; i <= n; i++)
			for (int j = p[k][i]; j <= m; j++)
				f[j] = max(f[j], f[j - p[k][i]] + p[k + 1][i] - p[k][i]);
		m += f[m];
	}
	cout << m;
	return 0;
}