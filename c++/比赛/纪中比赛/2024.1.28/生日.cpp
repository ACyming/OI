#pragma GCC optimize(2)
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e7;
int n;
int a[N];
int i, j;
void quicksort(int left, int right) {
	int temp, t;
	if (left > right) {
		return;
	}
	temp = a[left];
	i = left;
	j = right;
	while (i != j) {
		while (a[j] >= temp && i < j) {
			j--;
		}
		while (a[i] <= temp && i < j) {
			i++;
		}
		if (i < j) {
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	a[left] = a[i];
	a[i] = temp;
	quicksort(left, i - 1);
	quicksort(i + 1, right);
	return ;
}
main() {
	freopen("bir.in", "r", stdin);
	freopen("bir.out", "w", stdout);
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> a[i];
	}
	quicksort(1, n);
	for (i = 1; i <= n; i += 2)
		cout << a[i] << " ";
	if (n % 2 == 0)
		for (i = n; i >= 1; i -= 2)
			cout << a[i] << " ";
	else
		for (i = n - 1; i >= 1; i -= 2)
			cout << a[i] << " ";
	return 0;
}
//1 1 2 2 3
