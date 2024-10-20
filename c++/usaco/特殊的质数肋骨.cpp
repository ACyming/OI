#include <bits/stdc++.h>
using namespace std;
const int N = 1e7;
bool Not[(int)1e9];
int Primes[N], c, a, b;
void Os() {
	Not[0] = Not[1] = true;
	int i, j;
	for (i = 2 ; i <= b ; i ++) {
		if (!Not[i] && i / a != 1 && i / a != 4 && i / a != 6 && i / a != 8) {
			
			Primes[++c] = i;
			
		}
		for (j = 1 ; j <= c && Primes[j] * i <= b; j ++) {
			Not[Primes[j] * i] = true;
			if (i % Primes[j] == 0) break;
		}
	}
}
int n;
int Ns[9] = {0, 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000};
int Ne[9] = {0, 9, 99, 999, 9999, 99999, 999999, 9999999, 99999999};
bool check(int x) {
	string ss;
	int cc;
	ss = to_string(x);
	int head = 0, len = ss.size() - 1;
	for (int tail = len; tail >= 0; tail--) {
		for (int i = head; i <= tail; i++) {
			cc *= 10;
//			cout << ss[i]-'0' << endl;
			cc += ss[i] - '0';
		}
		if (Not[cc]) return false;
		cc = 0;
	}
	return true;
}
int main() {
	cin >> n;
	a = Ns[n], b = Ne[n];
	Os();
	for (int i = 1; i <= c; i++) {
		if (Primes[i] / a == 1 || Primes[i] * 10 == 5 || Primes[i] * 10 == 8 || Primes[i] * 10 == 9) continue;
		if (Primes[i] >= a && Primes[i] <= b && check(Primes[i]))
			cout <<	Primes[i] << endl;
	}
	cout<<c;
	return 0;
}
