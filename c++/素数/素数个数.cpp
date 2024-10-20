#include <bits/stdc++.h>
using namespace std;
const int N = 1e8 + 10;
bool Not[N];
int Primes[N], c, n;
void Os() {

	Not[0] = Not[1] = true;
	int i, j;
	for (i = 2 ; i <= n ; i ++) {
		if (!Not[i]) {

			Primes[++c] = i;
		}
		for (j = 1 ; j <= c && Primes[j] * i <= n; j ++) {
			Not[Primes[j] * i] = true;
			if (i % Primes[j] == 0) break;
		}
	}
}
int main() {
	cin >> n;
	Os();
	int ans = 0;
	for (int i = 1 ; i <= c; i ++) {
		if (Primes[i] >= 1 && Primes[i] <= n) {
//			cout << Primes[i] << endl;
			ans++;
		}
	}
	cout << ans;
	return 0;

}
