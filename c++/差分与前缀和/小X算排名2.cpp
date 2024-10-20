#include <bits/stdc++.h>
using namespace std;
const int N = 1e7;
int a[N], b[N];
int find(int x, int len) {
	int l = 1, r = len;
	while (l <= r) {
		int mid = (l + r) >> 1;
		if (a[mid] == x)     r = mid - 1;
		else if (a[mid] < x) r = mid - 1;
		else if (a[mid] > x) l = mid + 1;
	}
	return l;
}
bool cmp(int x, int y) {
	return x > y;
}
int main() {
	int n;
	scanf("%d", &n);
//	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a + 1, a + n + 1, cmp);
	for (int i = 1; i <= n; i++) {
//		cout << find(b[i], n) << endl;
		printf("%d\n",find(b[i], n));
	}
	return 0;
}

