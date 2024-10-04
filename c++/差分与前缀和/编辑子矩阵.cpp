#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int a[N][N], b[N][N];
int main() {
	int n, k, x1, y1, x2, y2;
	scanf("%d%d", &n, &k);
	while(k--) {
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		for (int i = x1 ; i <= x2 ; i ++) {
			b[i][y1] += 1;
			b[i][y2 + 1] -= 1;
		}
	}
	for (int i = 1 ; i <= n ; i ++) {
		for (int j = 1 ; j <= n ; j ++) {
			a[i][j] = a[i][j - 1] + b[i][j];
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
