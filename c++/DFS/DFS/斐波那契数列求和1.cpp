#include <bits/stdc++.h>
#define int long long
using namespace std;
int f[1000020];
int n, m;
int sum;
main() {
	cin >> n >> m;
	f[1] = f[2] = 1;
	for (int i = 3; i <= m; i++)
		f[i] = (f[i - 1]% 10000 + f[i - 2]% 10000)% 10000;
	for (int i = n; i <= m; i++)
		sum += f[i]% 10000;
	cout << sum % 10000;
	return 0;
}