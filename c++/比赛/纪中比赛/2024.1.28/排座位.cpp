#pragma GCC optimize(2)
#include <bits/stdc++.h>
#define int long long
using namespace std;
string s;
int ans;
int n, b, g;
main() {
//	freopen("seats.in", "r", stdin);
//	freopen("seats.out", "w", stdout);
	cin >> n >> b >> g;
	cin >> s;
	if (s[0] == '.') {
		if (b > 0 && b >= g) {
			s[0] = 'b';
			b--;
			ans++;
		} else if (g > 0 && g >= b) {
			s[0] = 'g';
			g--;
			ans++;
		}
	}
	for (int i = 1; i < n; i++) {
		if (g == 0 && s[i - 1] == 'b')
			s[i] = '/';
		if (b == 0 && s[i - 1] == 'g')
			s[i] = '/';
		if (s[i] == '.' && s[i - 1] == 'g' && b != 0) {
			s[i] = 'b';
			b--;
			ans++;
		} else if (s[i] == '.' && s[i - 1] == 'b' && g != 0) {
			s[i] = 'g';
			g--;
			ans++;
		} else if (s[i] == '.' && (s[i - 1] == '*' || s[i - 1] == '/')) {
			if (b > 0 && b >= g) {
				s[i] = 'b';
				b--;
				ans++;
			} else if (g > 0 && g >= b) {
				s[i] = 'g';
				g--;
				ans++;
			}
		}

	}
//	cout<<s;
	cout << ans;
	return 0;
}
