#include <bits/stdc++.h>
using namespace std;
int n, t;
long long a[9999], b[9999], c[9999];
int cnt;
bool pd = 0;
void dfs(int x) {
	memset(c, 0, sizeof(c));
	int num = n;
	if (x > n) {
		for (int i = 1; i <= num; i++) {
			c[i] = a[i];
		}
		while (num != 1) {
			for (int i = 1; i < num; i++) {
				c[i] += c[i + 1];
//				cout<<c[i]<<" "<<i<<endl;
			}
			num = num - 1;
		}
		if (c[1] == t && pd == 0) {
			for (int i = 1; i <= n; i++) {
				cout << a[i] << " ";
			}
			cout << endl;
			pd = 1;
		}
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (b[i] == 0) {
			a[x] = i;
			b[i] = 1;
			dfs(x + 1);
			b[i] = 0;
		}
	}

}
int main() {
	while (1) {
		cin >> n >> t;
		if (n == 0 && t == 0) {
			break;
		}
		pd = 0;
		dfs(1);
	}
	return 0;
}
// 1 2 3 4
//3 5 7
// 8 12
//20
