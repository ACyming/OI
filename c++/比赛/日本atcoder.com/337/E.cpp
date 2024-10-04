#include <bits/stdc++.h>
using namespace std;
string s;
int ans[110], ans2, cnt = 0, m, n;
int t = 1;
int main() {
	scanf("%d", &n);
	m = ceil(log2(n));
	printf("%d\n", m);
	for (int i = 1; i <= m; i++) {
		t = (1 << (i - 1));
		for (int j = 1; j <= n; j++)
			if (j & t) ans[++cnt] = j;
		printf("%d ", cnt);
		for (int j = 1; j <= cnt; j++)
			printf("%d ", ans[j]), ans[j] = 0;
		printf("\n");
		cnt = 0;
	}
	fflush(stdout);
	cin >> s;
	s.reserve();
	t = 0;
	for (int i = 0; i < s.size(); i++)
		if (s[i] == '1') t = (1 << i), ans2 += t;
	ans2 != 0 ? printf("%d\n", ans2) : printf("%d\n", n);
	fflush(stdout);
	return 0;
}
