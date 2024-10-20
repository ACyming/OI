#include <bits/stdc++.h>
using namespace std;
string s;
char c = 'A';
int main() {
	cin >> s;
	if (s == "A") cout << "Yes", exit(0);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] < c) {
			cout << "No";
			return 0;
		}
		c = s[i];
	}
	cout << "Yes";
	return 0;
}
