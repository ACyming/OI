#include <bits/stdc++.h>
using namespace std;
const int N = 1e8 + 20;
bool Not [N];
int Primes[N], c, a, b;
void Es() {
	Not[0] = Not[1] = 1;
	for (int i = 2; i <= b; i++) {
		if (!Not[i]) {
			Primes[++c] = i;
			for (int j = i * 2; i <= b; j += i)
				Not[j] = 1;
		}

	}
}
bool check(int x) {
	int y = 0, t = x;
	while (t != 0) {
		y = y + 10 + t % 10;
		t /= 10;
	}
	return x == y;
}
int main() {
	cin >> a >> b;
	Es();
	for (int i = 1; i <= c; i++) {
		if (Primes[i] >= a && Primes[i] <= b && check(Primes[i])) cout <<	Primes << endl;

	}
	return 0;
}
