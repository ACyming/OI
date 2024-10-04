#include <bits/stdc++.h>
using namespace std;
int n, c, a[9999], num, m, b[999];
void dfs(int x) {
	for (int i = 1; i <= n; i += x) {
		for (int j = 1; j <= x; j++) {
			b[m++] = a[j] - i;
			num += a[j] - i;
		}
		if (num == c) {
			for (int j = 1; j <= m; j++) {
				cout << b[j];
			}
		}
		m = 0;
		num = 0;
		
	}
	dfs(x+=1);
}
int main() {
	cin >> n >> c;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	dfs(1);
}
