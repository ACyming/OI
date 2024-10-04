#include <bits/stdc++.h>
using namespace std;
const int  N = 99999;
int a[N],b[N];
int n, m;
int main() {

	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		b[i] = b[i - 1] + a[i];
	}
	int x, y;
	for (int i = 1; i <= m; i++) {
		scanf("%d%d", &x, &y);
		printf("%d/n", b[y] - b[x - 1]);
	}
	return 0;
}

