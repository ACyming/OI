#include <bits/stdc++.h>
using namespace std;
char s1[999999], s2[999999], s3[999999],n[999999];
int a[999999], b[999999], c[999999], l1, l2, l3, i;
int main() {
	scanf("%s", s1);
	scanf("%s", s2);
	if (strlen(s1) < strlen(s2) || strlen(s1) == strlen(s2) && strcmp(s1, s2) < 0) {
		strcpy(n,s1);
		strcpy(s1,s2);
		strcpy(s2,n);
		cout << "-";
	}
	l1 = strlen(s1);
	l2 = strlen(s2);
	for (i = 0; i <= l1 - 1; i++)
		a[l1 - i] = s1[i] - 48;
	for (i = 0; i <= l2 - 1; i++)
		b[l2 - i] = s2[i] - 48;
	i = 1;
	while (i <= l1 || i < l2) {
		if (a[i] < b[i]) {
			a[i] += 10;
			a[i + 1]--;
		}
		c[i] = a[i] - b[i];
		i++;
	}
	l3 = i;
	while (c[l3] == 0 && l3 > 1)
		l3--;
	for (i = l3; i >= 1; i--)
		cout << c[i];
	return 0;
}
