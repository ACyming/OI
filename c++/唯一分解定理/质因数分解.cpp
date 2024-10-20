#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, i=2;
	scanf("%d", &n);
	while (n > 1) {
		if (n % i == 0) {
			printf("%d", max(i, n / i));
			n = n / i;
			return 0;
		} else
			i++;
	}
	return 0;
}
