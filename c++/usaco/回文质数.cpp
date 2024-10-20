#include <bits/stdc++.h>
using namespace std;
bool Not[100000010];
int Primes[9762465], c, a, b;
void Os() {
	Not[0] = Not[1] = true;
	int i,j;
	for (i = 2 ; i <= b ; i++) {
		if (!Not[i])
			Primes[++c] = i;
		for (j = 1 ; j <= c && Primes[j] * i <= b; j++) {
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
	scanf("%d%d",&a,&b);
	Os();
	int i;
	for (i = 1 ; i <= c; i ++)
		if (Primes[i] >= a && Primes[i] <= b && check(Primes[i]))
			printf("%d\n",Primes[i]);
	return 0;
}
