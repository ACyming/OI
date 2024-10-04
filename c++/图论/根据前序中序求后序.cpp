#include <bits/stdc++.h>
using namespace std;
string s1, s2;
void dfs(int l1, int r1, int l2, int r2) {
	int mid = s2.find(s1[l1]);
	if (l2 < mid) dfs(l1 + 1, l1 + mid - l2, l2, mid - 1);
	if (l2 > mid) dfs(l1 + mid - l2 + 1, r1, mid + 1, r2);
	cout << s1[l1];
}
int main() {
	cin >> s1 >> s2;
	dfs(0, s1.size() - 1, 0, s2.size() - 1);
	return 0;
}
