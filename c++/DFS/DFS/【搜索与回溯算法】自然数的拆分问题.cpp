#include <cstdio>
#include <iostream>
using namespace std;
int c, h, a[99999] = {1}, n;
bool b[99999];
void dfs(int x, int y) {
	for (int i = a[y - 1]; i <= x; i++) {
		if (i < n) {
			a[y] = i;
			x -= i;
			if (x == 0) {
				cout << a[1];
				for (int i = 2; i <= y; i++) {
					cout << "+" << a[y];
				}
				cout << endl;
				return;
			} else {
				dfs(x, y + 1);
			}
			x += i;
		}
	}
}
int main() {
	cin >> n;
	dfs(n, 1);
}
