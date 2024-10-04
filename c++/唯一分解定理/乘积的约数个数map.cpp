#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int mod = 1e9 + 7;
int main() {
	int n;
	cin >> n;
	unordered_map<int, int> primes;
	while (n--) {
		int x;
		cin >> x;
		for (int i = 2; i <= x / i; i++)
			while (x % i == 0) {
				x /= i;
				primes[i]++;
			}
		if (x > 1)
			primes[x]++;
	}
	LL ans = 1;
	for (auto t : primes)
		ans = ans * (t.second + 1) % mod;
	cout << ans << endl;
	return 0;
}



