#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 25;
int a[N], b[N],l,r,v;
int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		b[i] = a[i] - a[i - 1];
	}
	for (int i = 1; i <= k; i++) {
		scanf("%d%d%d", &l, &r, &v);
		b[l] -= v;
		b[r + 1] += v;
		
	}
	int minn=INT_MAX;
	for (int i = 1; i <= n; i++) {
		a[i] = a[i - 1] + b[i];
		minn=min(minn,a[i]);
	}
	cout<<minn;
	return 0;
}
