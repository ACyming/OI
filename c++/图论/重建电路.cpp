#include <bits/stdc++.h>
using namespace std;
int t, n, e;
struct node {
	int a, b, k;
} a[150000];
int f[150000];
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
int cmp(node xx, node yy) {
	return xx.k < yy.k;
}
int kl() {
	int tot = 0, ans = 0;
	sort(a + 1, a + 1 + e, cmp);
	for (int i = 1; i <= e; i++) {
		int fa = find(a[i].a);
		int fb = find(a[i].b);
		if (fa != fb) {
			hb(fa, fb);
			tot++;
			ans += a[i].k;
		}
		if (tot == n - 1)
			return ans;
	}
	return ans;
}
int main() {
	cin >> t;
	while (t--) {
		memset(a, 0, sizeof(a));
		cin >> n >> e;
		for (int i = 0; i < n; i++)
			f[i] = i;
		for (int i = 1; i <= e; i++)
			cin >> a[i].a >> a[i].b >> a[i].k;
		cout << kl() << endl;
	}
	return 0;
}
