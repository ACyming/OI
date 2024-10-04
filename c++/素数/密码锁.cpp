#include <bits/stdc++.h>
using namespace std;
const int N = 1e8 + 10;
bool Not[N];
int c, n;
int abab(int x, int y) {
	if (x >= y)
		return x - y;
	return x + 10 - y;
}
int main() {
	memset(Not, true, sizeof(Not));
	Not[0] = Not[1] = false;
	for (int i = 2; i <= 1000000; i++)
		if (Not[i])
			for (int j = 2; j <= 1000000 / i; j++)
				Not[i * j] = false;
	int n;
	cin >> n;
	int a = n / 10000, b = n / 1000 % 10, c = n / 100 % 10, d = n / 10 % 10, e = n % 10;
	int maxx = 45, ans = 0;
	for (int i = 0; i <= 99999; i++) {
		if (Not[i]) {
			int j = i / 10000, k = i / 1000 % 10, l = i / 100 % 10, m = i / 10 % 10, o = i % 10;
			int cnt = min(abab(a, j), abab(j, a)) + min(abab(b, k), abab(k, b)) + min(abab(c, l), abab(l, c)) + min(abab(d, m), abab(m, d)) + min(abab(e, o), abab(o, e));
			if (cnt < maxx) {
				maxx = cnt;
				ans = i;
			} else if (cnt == maxx && i > ans)
				ans = i;
		}
	}
	cout << ans / 10000 << ans / 1000 % 10 << ans / 100 % 10 << ans / 10 % 10 << ans % 10;
	return 0;
}
