#include <bits/stdc++.h>
using namespace std;
string s;
bool dfs(int x) {
	if (2 * x - 1 >= s.size())
		return 1;
	if (2 * x - 1 < s.size() && 2 * x >= s.size())
		return 0;
	if (s[2 * x - 1] == '#' && s[2 * x] == '#')
		return 1;
	if (s[2 * x - 1] == '#' || s[2 * x] == '#')
		return 0;
	return dfs(2 * x) && dfs(2 * x - 1);
}
int main() {
	cin >> s;
	if (dfs(1)) cout << "Yes";
	else cout << "No";
	return 0;
}
