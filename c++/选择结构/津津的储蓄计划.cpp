#include <bits/stdc++.h>
using namespace std;
int a[20], sy, cq;
int main() {
	for (int i = 1; i <= 12; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= 12; i++) {
		sy += 300;
		sy -= a[i];
//		cout << endl << sy << " " << cq << " " << i << endl;
		if (sy >= 0) {
			while (sy >= 100) {
				sy -= 100;
				cq += 100;
			}
		} else {
			cout << 0 - i;
			return 0;
		}
//		cout << sy << " " << cq << endl;
	}
	cout << sy + cq * 1.2;
	return 0;
}
//1
