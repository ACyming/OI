#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
vector<int> v[N];
int ma, p;
int main() {
	int n, c, x;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> c;
		for (int j = 1; j <= c; j++) {
			cin >> x;
			v[i].push_back(x);
		}
	}
	for (int i = 1; i <= n; i++) {
		int s = 0;
		for (int j = 0; j < v[i].size(); j++) {
			s += v[v[i][j]].size();

		}
		if (ma < s) {
			ma = s;
			p = i;
		}
	}
	cout << p << " " << ma;
	return 0;
}
