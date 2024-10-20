#include <bits/stdc++.h>
using namespace std;
const int d[5][2] = {{0, 0}, {-1, 0}, {0, +1}, {+1, 0}, {0, -1}};
const int n = 10;
bool mp[n + 5][n + 5];
int cx, cy, fx, fy, dc = 1, df = 1;
int main()
{
	char c;
	memset(mp, true, sizeof(mp));
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			{
				cin >> c;
				if (c == 'C') cx = i, cy = j, c = '.', mp[i][j] = 0;
				if (c == 'F') fx = i, fy = j, c = '.', mp[i][j] = 0;
				if (c == '*') mp[i][j] = 1;
				if (c == '.') mp[i][j] = 0;
			}
	for (int i = 1; i <= 100000; i++)
	{
		if (!mp[cx + d[dc][0]][cy + d[dc][1]])
			cx += d[dc][0], cy += d[dc][1];
		else
		{
			dc %= 4;
			dc++;
		}
		if (!mp[fx + d[df][0]][fy + d[df][1]])
			fx += d[df][0], fy += d[df][1];
		else
		{
			df %= 4;
			df++;
		}
		if (cx == fx && cy == fy)
		{
			cout << i;
			return 0;
		}
	}
	cout << 0;
	return 0;
}