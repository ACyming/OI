#include <bits/stdc++.h>
using namespace std;
char s[110];
bool check(int x) {
	if (x < 2) return 0;
	if (x == 2) return 1;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0)
			return 0;
	return 1;
}
int sum[26];
int main() {
	int maxn = -0x3f3f3f3f, minn = -0x3f3f3f3f;
	scanf("%s", s);
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		sum[s[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		if (sum[i] > maxn) maxn = sum[i];
		if (sum[i] > 0 && sum[i] < minn) minn = sum[i];
	}
	for (int i = 0; i < 25; i++) {
		if (check(maxn - minn)) {
			printf("Lucky Word\n%d", maxn - minn);
			return 0;
		}
	}
	printf("No Answer\n0");
	return 0;
}
