#include <bits/stdc++.h>
using namespace std;
const int N = 100020;
int a[N], c[N], b[N];
int minn = INT_MAX, l, x, num, n;
int main() {
	scanf("%d%d%d", &n, &l, &x);
	for (int i = 1; i <= x; i++) {
		scanf("%d", &a[i]);
		c[a[i]]=1;
		
	}
	for (int i = 1; i <= n; i++) {
		b[i] = b[i - 1] + c[i];
	}
	for (int i = 1; i <= n - l + 1 ; i++) {
		minn = min(minn, (b[i + l - 1] - b[i - 1]));
	}
	printf("%d", minn);
	return 0;
}
