#pragma GCC optimize(2)
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
unordered_map<string, int> a;
int x;
string s, ans;
int maxx = -0x3f3f3f3f;
main() {
	freopen("game.in", "r", stdin);
	freopen("game.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s;
		cin >> x;
		a[s] += x;
		if (maxx < a[s]) {
			ans = s;
			maxx = a[s];
		}
	}
	cout << ans;
	return 0;
}
