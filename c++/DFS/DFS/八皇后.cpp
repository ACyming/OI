#include <bits/stdc++.h>
using namespace std;
int ans[15], n, cnt;
bool a[15], b[30], c[30];
void print() {
	if (cnt < 3) {
		for (int i = 1; i <= n; i++) {
			if (i != 1)
				printf(" ");
			printf("%d", ans[i]);
		}
		printf("\n");
	}
}
void dfs(int x) {
	if (x > n) {
		print();
		cnt++;
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!a[i] && !b[x + i] && !c[x - i + n]) {
			a[i] = 1;
			b[x + i] = 1;
			c[x - i + n] = 1;
			ans[x] = i;
			dfs(x + 1);
			a[i] = 0;
			b[x + i] = 0;
			c[x - i + n] = 0;
		}
	}
}
int main() {
	cin >> n;
	dfs(1);
	printf("%d", cnt);
	return 0;
}

