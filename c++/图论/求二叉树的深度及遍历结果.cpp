#include <bits/stdc++.h>
using namespace std;
int n;
int a[110];
void dfs(int x) {
	if (a[x * 2] != 0)dfs(2 * x);
	if (a[x * 2 + 1] != 0)dfs(2 * x + 1);
	cout << a[x]<<" ";
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	cout << floor(log2(n)) + 1 << endl;
	dfs(1);
	return 0;
}
