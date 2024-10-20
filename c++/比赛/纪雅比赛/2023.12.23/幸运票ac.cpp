#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int n, s, f[52][1002][102], c[202];
void gzj(int x, int y, int l) {
	for (int i = 1; i <= 100; i++) {
		f[x][y][i] += f[x - 1][y - l][i];
		f[x][y][i + 1] += f[x][y][i] / 10;
		f[x][y][i] %= 10;
	}
}
void gzc() {
	for (int i = 1; i <= 100; i++)
		for (int j = 1; j <= 100; j++) {
			c[i + j - 1] += f[n][s][i] * f[n][s][j];
			c[i + j] += c[i + j - 1] / 10;
			c[i + j - 1] %= 10;
		}
}
int main() {
	scanf("%d %d", &n, &s);
	s /= 2;
	for (int i = 1; i <= n; i++)
		for (int j = 0; j <= s; j++)
			if (i == 1 && j <= 9) f[i][j][1] = 1;
			else for (int k = 0; k <= min(j, 9); k++)
					gzj(i, j, k);
	gzc();
	int p = 200;
	while (c[p] == 0 && p) p--;
	if (p == 0) printf("0");
	for (int i = p; i >= 1; i--)
		printf("%d", c[i]);
	return 0;
}

