#include <bits/stdc++.h>
using namespace std;
int l1, l2, nxt[100010];
char a[100010], b[100010];
void getnext() {
	nxt[1] = 0;
	int j = 1, k = 0;
	while (j < l2) {
		if (k == 0 || b[j] == b[k]) {
			j++;
			k++;
			nxt[j] = k;
		} else {
			k = nxt[k];
		}
	}
}
void kmp(int i) {
	if (i > l1) return;
	int j = 1;
	while (i <= l1 && j <= l2) {
		if (j == 0 || a[i] == b[j]) {
			i++;
			j++;
		} else
			j = nxt[j];
	}
	if (j > l2) {
		cout << i - l2 << endl;
		kmp(i);
	} else return ;
}
int main() {
	cin >> l1 >> l2;
	cin >> a + 1 >> b + 1;
	getnext();
	kmp(1);
}
