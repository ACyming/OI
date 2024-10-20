#include <bits/stdc++.h>
using namespace std;
const int  N = 99999;
int num, maxx, sum[N], ans[N];
int n, m;
int main() {
	memset(ans,-0x3f3f3f3f,sizeof(ans));
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &sum[i]);
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			ans[j - i + 1] = max(ans[j - i + 1], sum[j] - sum[i - 1]);
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			ans[i] = max(ans[i], ans[j]);
		}
	}
	for (int i = 1; i <= m; i++) {
		cin >> num;
		cout << ans[num] << endl;
	}
	return 0;
}
