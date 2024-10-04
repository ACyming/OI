#include <bits/stdc++.h>
using namespace std;
int main() {
	bool pr = 1;
	int n, m, i = 2;
	scanf("%d%d", &n, &m);
	for (int j = n; j <= m; j++) {
		int k = j;
		i = 2;
		pr = 1;
		cout << k << "=";
		while (k > 1) {
			if (k % i == 0) {
				k = k / i;
				if (pr == 1) {
					printf("%d", i);
					pr = 0;
				}
				else
					printf("*%d", i);
			} else
				i++;
		}
		cout << endl;
	}

	return 0;
}
