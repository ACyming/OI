#include <bits/stdc++.h>
using namespace std;
struct Node {
	char c;
	int l, r;

} a[40];
int n;
void dfs1(int x) {
	cout << a[x].c;
	if (a[x].l != 0)dfs1(a[x].l);
	if (a[x].r != 0)dfs1(a[x].r);

}
void dfs2(int x) {
	if (a[x].l != 0)dfs2(a[x].l);
	cout << a[x].c;

	if (a[x].r != 0)dfs2(a[x].r);

}
void dfs3(int x) {
	if (a[x].l != 0)dfs3(a[x].l);
	if (a[x].r != 0)dfs3(a[x].r);
	cout << a[x].c;


}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].c >> a[i].l >> a[i].r;
	}
	dfs1(1);
	cout << endl;
	dfs2(1);
	cout << endl;
	dfs3(1);
	cout << endl;
	return 0;
}
