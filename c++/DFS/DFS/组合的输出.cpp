#include <cstdio>
#include <iostream>
using namespace std;
int c, h, a[99999];
bool b[99999];
void f(int x) {
	if (x > h) {
		for (int i = 1; i <= h; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
		return;
	}
	for (int i = 1; i <= c; i++) {
		if (b[i] == 0 && i > a[x - 1]) {
			a[x] = i;
			b[i] = 1;
			f(x + 1);
			b[i] = 0;
		}
	}
}
int main() {
	cin >> c >> h;
	f(1);
}
