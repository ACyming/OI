#include <bits/stdc++.h>
using namespace std;
bool f[5000005];
long long s[5000005];
int main() {
	long long a, b, c = 0;
	cin >> a >> b;
	f[0] = 1;
	f[1] = 1;
	for (int i = 2; i <= b; i++) {
		if (f[i] == false) {
			c++;
			s[c] = i;
		}
		for (int j = 1; j <= c && s[j]*i <= b; j++) {
			f[s[j]*i] = 1;
			if (i % s[j] == 0)
				break;
		}
	}
	int ans = 0;
	for (int i = 1; i <= c; i++) {
		for (int j = i; j <= c && s[i]*s[j] <= b; j++) {
			if (s[i]*s[j] >= a)
				ans++;
		}
	}
	cout << ans;
}
