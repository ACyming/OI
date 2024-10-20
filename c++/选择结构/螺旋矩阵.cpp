#include <bits/stdc++.h>
int n, a[1000][1000], cnt = 1;
int main() {
	int x, y;
	scanf("%d%d%d", &n, &x, &y);
	int i = 1, j = 1;
	a[i][j] = cnt;
	while (cnt < n * n) {
		while (j + 1 <= n && a[i][j + 1] == 0) {
			a[i][++j] = ++cnt;
			if (i == x && j == y)	{
				printf("%d", cnt);
				exit(0);
			}
		}
		while (i + 1 <= n && a[i + 1][j] == 0) {
			a[++i][j] = ++cnt;
			if (i == x && j == y)	{
				printf("%d", cnt);
				exit(0);
			}
		}
		while (j - 1 > 0 && a[i][j - 1] == 0) {
			a[i][--j] = ++cnt;
			if (i == x && j == y)	{
				printf("%d", cnt);
				exit(0);
			}
		}
		while (i - 1 > 0 && a[i - 1][j] == 0) {
			a[--i][j] = ++cnt;
			if (i == x && j == y)	{
				printf("%d", cnt);
				exit(0);
			}
		}

	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			std::cout << a[i][j] << " ";
//		}
//		printf("\n");
//	}


	return 0;
}
