#include <bits/stdc++.h>
using namespace std;
const long long  N = 1e8 + 10;
bool Not[N];
long long Primes[N], c, n;
void Os() {

	Not[0] = Not[1] = true;
	for (long long i = 2 ; i <= n ; i ++) {
		if (!Not[i]) {

			Primes[++c] = i;
		}
		for (long long  j = 1 ; j <= c && Primes[j] * i <= n; j ++) {
			Not[Primes[j] * i] = true;
			if (i % Primes[j] == 0) break;
		}
	}
}
int main() {
	long long m, k;
	scanf("%lld%lld", &n, &m);
	Os();
	for (long long i = 1 ; i <= m; i ++) {
		scanf("%lld", &k);
		printf("%lld\n", Primes[k]);
	}
	return 0;

}
