#include <bits/stdc++.h>
using namespace std;
int main() {
	long long n, i, j, minn, ans = 0;
	cin >> n >> i >> j;
	minn = min(i, min(j, min(n - i + 1, n - j + 1)));
	if (i <= j)
		ans = minn * (4 * (n - 1) - 4 * minn) + 10 * minn - 4 * n - 3 + i + j;
	else 
		ans = minn * (4 * n - 4 * minn) + 2 * minn + 1 - i - j;
	cout << ans;
	return 0;
}
