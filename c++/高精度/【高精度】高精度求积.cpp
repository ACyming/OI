#include <bits/stdc++.h>
using namespace std;
char s1[101], s2[101], s3[101];
int a[101], b[101], c[100001], len1, len2, len3, x;
int main() {
	scanf("%s", s1);
	scanf("%s", s2);
	len1 = strlen(s1);
	len2 = strlen(s2);
	for (int i = 0; i <= len1 - 1; i++)
		a[len1 - i] = s1[i] - 48;
	for (int i = 0; i <= len2 - 1; i++)
		b[len2 - i] = s2[i] - 48;
	for (int i = 1; i <= len1; i++) {
		x = 0;
		for (int j = 1; j <= len2; j++) {
			c[i + j - 1] = a[i] * b[j] + x + c[i + j - 1];
			x = c[i + j - 1] / 10;
			c[i + j - 1] %= 10;
		}
		c[i + len2] = x;
	}
	len3 = len1 + len2;
	while (c[len3] == 0 && len3 > 1)
		len3--;
	for (int i = len3; i >= 1; i--) {
		cout << c[i];
	}
	return 0;
}
