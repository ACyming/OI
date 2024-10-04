#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 100;
int a[N], n;
int num;
int find(int l, int r, int x) {
	int m = (l + r) / 2;
	while (l <= r) {
		m = (l + r) / 2;
		if (a[m] >= x) {
			r = m - 1;
		} else {
			l = m + 1;
		}
	}
	return l >= 1 && l <= n && a[l] == x ? l : -1;
}
int main() {
	int q, x;
	scanf("%d", &n);
	scanf("%d", &q);
	for (int i = 1 ; i <= n ; i ++) {
		scanf("%d", &a[i]);
	}
	int ans;
	while (q --) {
		int d;
		num = 1,ans=0;
		scanf("%d", &x);
		while (d!=-1) {
			d = find(num, n, x);
			
			if (d != -1) {
				num = d;
				a[d]=0;
				ans++;
			}
		}
		cout<<ans;

	}
	return 0;
}
