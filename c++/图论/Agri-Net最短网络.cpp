#include <bits/stdc++.h>
using namespace std;
int n, cnt, k;
int fa[1200];
int ans;
struct Node {
	int x, y, w;
} a[100200];
bool cmp(Node xx, Node yy) {
	return xx.w < yy.w;
}
int father(int x) {
	if (fa[x] != x)
		fa[x] = father(fa[x]);
	return fa[x];
}
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		fa[i] = i;
	int ci;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++) {
			scanf("%d", &ci);
			if (i != j) {
				cnt++;
				a[cnt].x = i;
				a[cnt].y = j;
				a[cnt].w = ci;
			}
		}
	sort(a + 1, a + 1 + cnt, cmp);
	for (int i = 1; i <= n * n; i++) {
		int xx = father(a[i].x);
		int yy = father(a[i].y);
		if (xx != yy) {
			fa[xx] = yy;
			ans += a[i].w;
			k++;
		}
		if (k == n - 1)
			break;
	}
	printf("%d",ans);
	return 0;
}
