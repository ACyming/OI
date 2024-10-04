#include <bits/stdc++.h>
using namespace std;
int n, a[100];
int main() {
	std::ios::sync_with_stdio(false);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	int x;
	for (int i = 1; i <= 3; i++) {
		cin >> x;
		a[x]++;
	}
	cout << a[n];
	return 0;
}
