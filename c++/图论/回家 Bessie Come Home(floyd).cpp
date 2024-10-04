#include <bits/stdc++.h>
using namespace std;
const int inf = 0x3f3f3f3f;
char s1, s2;
int g[60][60], l, p, ans2=99999;
char ans1;
int N(char s) {
	if (s >= 'a' && s <= 'z')
		return s - 'a' + 26;
	else
		return s - 'A';
}
void floyd() {
	for (int k = 0; k < 60; k++)
		for (int i = 0; i < 60; i++)
			for (int j = 0; j < 60; j++)
				g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
}
int main() {
	for (int i = 0; i < 60; i++)
		for (int j = 0; j < 60; j++)
			g[i][j] = inf - 1;
	cin >> p;
	while (p--) {
		cin >> s1 >> s2 >> l;
		int x = N(s1);
		int y = N(s2);
		g[x][y] = min(g[x][y], l);
		g[y][x] = min(g[y][x], l);
	}
	floyd();
	for (int i = 0; i < 25; i++) {
		if (g[i][25] <= ans2) {
			ans2 = g[i][25];
			ans1 = i + 'A';
		}
	}
	cout << ans1 << " " << ans2;
	return 0;
}
