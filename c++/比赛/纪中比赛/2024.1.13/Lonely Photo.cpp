#include <bits/stdc++.h>
using namespace std;
long long len, ans;
bool v = 0;
char f[3];
string s;
int main() {
	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);
	cin >> len;
	cin >> s;
	for (long long i = 3; i <= len; i++) {
		v = 0;
		for (long long j = 0; j < i; j++) {
			f[s[i] - 70]++;
			if (f[1] >= 2 && f[2] >= 2) {
				break;
				v = 1;
			}
		}
		if (v != 1) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}
