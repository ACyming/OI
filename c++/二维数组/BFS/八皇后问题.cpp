#include <bits/stdc++.h>
using namespace std;
bool d[17] = {0}, b[9] = {0}, c[17] = {0};
int sum = 0, a[9];
int print() {
	int i;
	sum++;
	cout << "No. " << sum << endl;
	for (int i = 1; i <= 8; i++) {
		cout << " " << a[i];
	}
	cout << endl;
}
int hs(int i) {
	int j;
	for (j = 1; j <= 8; j++) {
		if ((!b[j]) && (!c[i + j]) && (!d[i - j + 7])) {
			a[i] = j;
			b[j] = 1;
			c[i + j] = 1;
			d[i - j + 7] = 1;
			if (i == 8) {
				print();
			} else
				hs(i + 1);
			b[j] = 0;
			c[i + j] = 0;
			d[i - j + 7] = 0;
		}
	}
}

int main() {
	hs(1);
}
