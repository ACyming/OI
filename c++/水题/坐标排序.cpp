#include <bits/stdc++.h>
using namespace std;
pair<int, int> p[999999];
int n, x;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> p[i].first >> p[i].second;
	}


	sort(p + 1, p + 1 + n);
	for (int i = 1; i <= n; i++) {
		cout << p[i].first << " " << p[i].second << endl;
	}
	return 0;
}

