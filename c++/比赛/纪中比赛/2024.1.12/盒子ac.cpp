#include <bits/stdc++.h>
using namespace std;
int n, a[500020], c, ans ;
bool v[500020];
int main() {
	freopen("box.in", "r", stdin);
	freopen("box.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1, a + 1 + n);
	for (int i = 1; i <= n; i++) {
		if (c < a[i]) {
			if (!v[a[i]]) {
				c++;
//				if (c > a[n]) break;
				v[a[i]] = 1;
			}
		} else {
			ans++;
			c = 0;
			for (int j = 1; j <= n; j++) {	
				
				if (!v[a[j]]) {
					c++;
					v[a[j]] = 1;
				}
			}
		}
	
	}
	cout << ans;
	return 0;
}
