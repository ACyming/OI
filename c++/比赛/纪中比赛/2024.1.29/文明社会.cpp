#pragma GCC optimize(2)
#include <bits/stdc++.h>
#define int long long
using namespace std;
string s, vg[10];
int n;
main() {
//	freopen("culture.in", "r", stdin);
//	freopen("culture.out", "w", stdout);
	cin >> s;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> vg[i];
		int vv = s.find(vg[i]);
		while (vv != -1) {
			if (vg[i].size() > 2) {
				for (int j = vv; j < 2 * (vv + vg[i].size()); j += 2) {
					s.insert(j + 1, 1, '*');
				}
			} else {
				s.insert(vv + 1, 1, '*');
			}
			vv = s.find(vg[i],vv+1);
		}

	}
	cout << s;
	return 0;
}
