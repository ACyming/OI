#pragma GCC optimize(2)
#include <bits/stdc++.h>
#define int long long
using namespace std;
string s;
int a[300];
int maxx;
char ans;
main() {
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		a[s[i]]++;
	for (int i = 'a'; i <= 'z'; i++) {
		if (a[i] > maxx) {
			maxx = a[i];
			ans = i;
		}
	}
	cout << ans;
	return 0;
}
