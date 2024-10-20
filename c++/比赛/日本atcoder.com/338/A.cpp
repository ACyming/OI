#pragma GCC optimize(2)
#include <bits/stdc++.h>
#define int long long
using namespace std;
string s;
main() {
	cin >> s;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z')
			cout << "No", exit(0);
	}
	if (s[0] >= 'A' && s[0] <= 'Z')
		cout << "Yes";
	else
		cout << "No";
	return 0;
}
