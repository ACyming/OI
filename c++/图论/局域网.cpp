#include <bits/stdc++.h>
using namespace std;
int n, i, j, k, tot = 0, tot2 = 0, xh = 0, v1;
struct node {
	int x, y, v;
} a[100003];
int fat[101];
int father(int x) {
	if (fat[x] != x)
		fat[x] = father(fat[x]);
	return fat[x];
}
void find(int x, int y) {
	int fa = father(x);
	int fb = father(y);
	if (fa != fb) fat[fa] = fb;
}
int cmp(const node a, const node b) {
	return a. v <= b.v;
}
int main() {
	cin >> n >> k;
	for (i = 1; i <= n; i++)
		fat[i] = i;
	for (i = 1; i <= k; i++) {
		cin >> a[i].x >> a[i].y >> a[i].v;
	}
	sort(a + 1, a + k + 1, cmp);
	for (i = 1; i <= k; i++) {
		if (father(a[i].x) != father(a[i].y)) {
			find(a[i].x, a[i].y);
			tot += a[i].v;
			k++;
		}
		if (k == n - 1) break;
	}
	for (i = 1; i <= k; i++) {
		tot2 = tot2 + a[i].v;
	}
	cout << tot2 - tot;
	return 0;
}
