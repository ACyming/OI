#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("game.in", "w", stdout);
	cout << (int)1e5 << endl;
	srand(time(0));
	for (int i = 1; i <= (int)1e6; i++) {
		cout << char(rand() % 24 + 97);
		cout << " " << rand() << endl;
	}
	return 0;
}
