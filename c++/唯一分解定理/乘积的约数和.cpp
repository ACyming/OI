#include <iostream>
#include <unordered_map>
#define ll long long
using namespace std;
const int mod = 1e9 + 7;
int main() {
	int n, x;
	unordered_map<int, int> primes;
	cin >> n;
	while (n--) {
		cin >> x;
		for (int i = 2; i <= x / i; i++) {
			while (x % i == 0) {
				primes[i]++;
				x /= i;
			}
		}
		if (x > 1)   primes[x]++;
	}
	ll res = 1;
	for (auto q : primes) {
		ll a = q.first, b = q.second;
		ll t = 1;
		while (b--)  
			t = (t * a + 1) % mod;
		res = res * t % mod;
	}
	cout << res << endl;
	return 0;
}
