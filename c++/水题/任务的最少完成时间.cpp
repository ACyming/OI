#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 25;
long long int  a[N], b[N], maxx, n, k;
int main() {
	scanf("%lld%lld", &n, &k);
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
		b[i] = b[i - 1] + a[i];
	}
	for (int i = 1; i <= n - k + 1; i++) {
		maxx = max(b[i + k - 1] - b[i - 1], maxx);
	}
//	cout << b[n] - maxx;
	printf("%lld", b[n] - maxx);
	return 0;
}


