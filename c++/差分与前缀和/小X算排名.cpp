#include <bits/stdc++.h>
using namespace std;
int a[1000001], b[1000001];
int main() {
	int n;
	scanf("%d",&n);
	for (int i = 1; i <= n; i++) {
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	for (int i = 100000; i >= 1; i--) {
		b[i] += b[i + 1];
	}
	for (int i = 1; i <= n; i++) {
//		cout << b[a[i] + 1] + 1 << endl;
		printf("%d\n",b[a[i] + 1] + 1);
	}
}
