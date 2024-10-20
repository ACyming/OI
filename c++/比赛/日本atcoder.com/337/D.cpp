#include <bits/stdc++.h>
#define inf 0x3f3f3f3f
#define endl "\n"
using namespace std;
int n, m, k;
int sx, so;
const int N = 1e7;
string s[N];
int ans = inf;
int main() {
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	if (m >= k)//对,要判断,不然卡死循!!!
		for (int i = 0; i < n; i++) {
			sx = so = 0;
			for (int j = 0; j < k; j++) {
				if (s[i][j] == 'x') sx++;
				if (s[i][j] == 'o') so++;
			}
			if (sx == 0) ans = min(ans, k - so);
			for (int j = k; j < m; j++) {
				if (s[i][j - k] == 'x') sx--;
				if (s[i][j - k] == 'o') so--;
				if (s[i][j] == 'x') sx++;
				if (s[i][j] == 'o') so++;
				if (sx == 0) ans = min(ans, k - so);
			}
		}
	if (n >= k)
		for (int i = 0; i < m; i++) {
			sx = so = 0;
			for (int j = 0; j < k; j++) {
				if (s[j][i] == 'x') sx++;
				if (s[j][i] == 'o') so++;
			}
			if (sx == 0) ans = min(ans, k - so);
			for (int j = k; j < n; j++) {
				if (s[j - k][i] == 'x') sx--;
				if (s[j - k][i] == 'o') so--;
				if (s[j][i] == 'x') sx++;
				if (s[j][i] == 'o') so++;
				if (sx == 0) ans = min(ans, k - so);
			}
		}
	ans != inf ? cout << ans : cout << -1;
	return 0;
}
