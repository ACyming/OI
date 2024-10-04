#include <bits/stdc++.h>
using namespace std;
int n, f[999], m, a[999];
char s[999];
void dfs(int x) {
	if (x > n) {
		m++;
		for (int i = 1; i <= n; i++) {
			printf("%c", s[i]+96);
		}
		printf("\n");
		return;
	}
	for (int j = 1; j <= 26; j++) {
		if (f[j] > 0) {
			s[x] = j;
			f[j]--;
			dfs(x + 1);
			f[j]++;
		}
	}
}
int main() {
	scanf("%d\n", &n);
	scanf("%s", s + 1);
	for (int i = 1; i <= n; i++) {
		f[s[i]-96]++;
	}
	dfs(1);
	printf("%d", m);
	return 0;
}
