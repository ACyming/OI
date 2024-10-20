#include <bits/stdc++.h>
using namespace std;
struct Node {
	int x, y, l;
} a[6020];
int f[120];
int n, k;
int tot, ans;
bool cmp(Node xx, Node yy) {
	return xx.l < yy.l;
}
int find(int x) {
	if (x == f[x])	return x;
	else return f[x] = find(f[x]);
}
void hb(int x, int y) {
	int fx = find(x);
	int fy = find(y);
	if (fx != fy) {
		f[fx] = fy;
	}
}
int main() {
	cin >> n;
	int t;
	for (int i = 1; i <= n; i++)
		f[i] = i;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> t;
			if (i < j)
				a[++k] = {i, j, t};
		}
	}
	sort(a + 1, a + 1 + k, cmp);
	for (int i = 1; i <= k; i++) {
		int fx = find(a[i].x);
		int fy = find(a[i].y);
		if (find(fx) != find(fy)) {
			tot++;
			ans += a[i].l;
			f[fx] = fy;
		}
		if (tot == n - 1)
			break;
	}
	cout << ans;
	return 0;
}
