#include <bits/stdc++.h>
using namespace std;
int n;
int cnt1, cnt2;
int main() {
	cin >> n;
	int x, y;
	for (int i = 1; i <= n; i++) {
		cin >> x >> y;
		cnt1 += x;
		cnt2 += y;
	}
	if (cnt1 > cnt2) {
		cout << "Takahashi";
	} else if (cnt1 == cnt2) {
		cout << "Draw";
	} else {
		cout << "Aoki";
	}
	return 0;
}
