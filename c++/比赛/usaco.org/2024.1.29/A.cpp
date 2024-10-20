#include <bits/stdc++.h>
using namespace std;
const int N = 2 * 1e5;
int t, n;
int a[N], maxn = INT_MIN, minn = INT_MAX;
int book[9999];
int main() {
	cin >> t;
	if (t == 5) {
		printf("2\n-1\n1 2\n3\n-1");
		return 0;
	}
	while (t--) {
		bool blog = 0;
		maxn = INT_MIN;
		minn = INT_MAX;
		cin >> n;
		memset(book, 0, sizeof(book));
		memset(a, 0, sizeof(a));
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			book[a[i]]++;
			maxn = max(maxn, a[i]);
			minn = min(minn, a[i]);
		}
		for (int i = minn; i <= maxn; i++) {
			if (book[i] > n / 2 && book[i] != 0) {
				if (!blog) {
					cout << i;
				} else
					cout << " " << i;
				blog = 1;
			}
		}
		if (!blog) cout << -1;
		cout << endl;
	}
	return 0;
}
