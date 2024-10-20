#include <bits/stdc++.h>
using namespace std;
int n, e, i, j, k, tot = 0, xh = 0, v1;
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
	return a.v <= b.v;
}
int main() {
	cin >> n;
	for (i = 1; i <= n; i++)
		fat[i] = i;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			cin >> v1;
			if (i != j) {
				xh++;
				a[xh].v = v1;
				a[xh].x = i;
				a[xh].y = j;
			}
		}
	}
	sort(a + 1, a + xh + 1, cmp);
	for (i = 1; i <= n * n; i++) {
		if (father(a[i].x) != father(a[i].y)) {
			find(a[i].x, a[i].y);
			tot += a[i].v;
			k++;
		}
		if (k == n - 1) 
			break;
	}
	cout << tot;
	return 0;
}


