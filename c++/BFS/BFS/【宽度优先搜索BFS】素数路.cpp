#include <bits/stdc++.h>
using namespace std;
int d[1000000][3], head, tail = 1, k, a[5], minn = 100000, n;
bool vis[11][11][11][11];
bool check(int x) {
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0)	return 0;
	}
	return 1;
}
void bfs(int x) {
	a[1] = x % 10;
	a[2] = x / 10 % 10;
	a[3] = x / 100 % 10;
	a[4] = x / 1000;
	d[1][1] = x;
	while (head <= tail) {
		head++;
		for (int i = 0; i <= 9; i++) {
			for (int j = 4; j >= 1; j--) {
				if (a[j] != i) {
					a[1] = d[head][1] % 10;
					a[2] = d[head][1] / 10 % 10, a[3] = d[head][1] / 100 % 10, a[4] = d[head][1] / 1000;
					a[j] = i;
					int num = a[1] + a[2] * 10 + a[3] * 100 + a[4] * 1000;
					if (num < 1000)	continue;
					if (check(num) && vis[a[1]][a[2]][a[3]][a[4]] == 0) {
						tail++;
						d[tail][1] = num;
						d[tail][2] = d[head][2] + 1;
						vis[a[1]][a[2]][a[3]][a[4]] = 1;
						if (num == k) {
							cout << d[tail][2];
							exit(0);
						}
					}
				}
			}
		}
	}
}
int main() {

	cin >> n >> k;
	bfs(n);
	cout << "Impossible";
	return 0;
}
