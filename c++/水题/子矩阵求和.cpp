#include<bits/stdc++.h>
using namespace std;
const int N = 9999;
int n, m, k;
int a[N][N], b[N][N];
int main() {
	scanf("%d%d%d", &n, &m, &k);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d", &a[i][j]);
		}
	}


	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1] + a[i][j];
		}
	}


	int x1, x2, y1, y2;
	while (k--) {
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		printf("%d\n", b[x2][y2] - b[x1 - 1][y2] - b[x2][y1 - 1] + b[x1 - 1][y1 - 1]);
	}
	return 0;
}
