#include <bits/stdc++.h>
using namespace std;
long long a, za, zb;
bool t[40], o[15];
int main() {
	freopen("lottery.in", "r", stdin);
	freopen("lottery.out", "w", stdout);
	for (long long i = 1; i <= 7; i++) {
		cin >> a;
		if (i <= 5)	t[a] = 1;
		else	o[a] = 1;
	}
	for (long long i = 1; i <= 7; i++) {
		cin >> a;
		if (i <= 5) {
			if (t[a] == 1) {
				za++;
			}
		} else {
			if (o[a] == 1) {
				zb++;
			}
		}
	}
	if (za == 5 && zb == 2)	cout << 5000000;
	else if (za == 5 && zb == 1)	cout << 250000;
	else if ((za == 5 && zb == 0) || (za == 4 && zb == 2))	cout << 3000;
	else if ((za == 4 && zb == 1) || (za == 3 && zb == 2))	cout << 200;
	else if ((za == 4 && zb == 0) || (za == 3 && zb == 1) || (za == 2 && zb == 2))	cout << 10;
	else if ((za == 3 && zb == 0) || (za == 1 && zb == 2) || (za == 2 && zb == 1) || za == 0 && zb == 2)cout << 5;
	else cout << 0;
	return 0;
}
