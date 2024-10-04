#include <bits/stdc++.h>
using namespace std;
char s[10000020];
int f[30], ans = 999999999;
int len;
int main() {
	freopen("candy.in", "r", stdin);
	freopen("candy.out", "w", stdout);
	scanf("%s", s);
	int i = 0;
	memset(f, -1, sizeof(f));
	len = strlen(s);
	for (int j = 0; j < len; j++) {
		if (f[s[j] - 'A'] >= i) {
			i = f[s[j] - 'A'] + 1;
			ans = min(ans, j - i + 1);
		}
		f[s[j] - 'A'] = j ;
	}
	if (ans == 999999999) printf("-1"), exit(0);
	printf("%d", ans);
	return 0;
}
