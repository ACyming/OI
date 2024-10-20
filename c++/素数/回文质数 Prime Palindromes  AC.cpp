#include <bits/stdc++.h>
using namespace std;
const int N = 1e8 + 10;
bool Not[N];
int Primes[N], c, a, b;
void Os() {

	Not[0] = Not[1] = true;
	int i, j;
	for (i = 2 ; i <= b ; i ++) {
		if (!Not[i]) {

			Primes[++c] = i;

		}
		for (j = 1 ; j <= c && Primes[j] * i <= b; j ++) {
			Not[Primes[j] * i] = true;
			if (i % Primes[j] == 0) break;
		}
	}
}
bool check(int x) {
	int y = 0, t = x;
	while (t > 0) {
		y = y * 10 + t % 10;
		t /= 10;
	}
	return x == y;
}
int main() {
	cin >> a >> b;
	Os();
	for (int i = 1 ; i <= c; i ++) {
		if (Primes[i] >= a && Primes[i] <= b && check(Primes[i])) {
			cout << Primes[i] << endl;
		}
	}
	return 0;

}
