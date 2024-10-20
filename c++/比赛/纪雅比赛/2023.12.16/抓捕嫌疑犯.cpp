#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int x, y, n, k, m, td[30001][2];
struct node {
	int xx, yy;
	double d;
} a[30001];
bool cmp(node xx, node yy) {
	if (xx.d > yy.d) return 1;
	if (xx.xx > yy.xx) return 1;
	if (xx.yy > xx.yy) return 1;
	return 0;
}

int main() {
	scanf("%d%d", &x, &y);
	scanf("%d%d", &n, &k);
	for (int i = 1; i <= n; i++) {
		scanf("%d%d", &a[i].xx, &a[i].yy);
		a[i].d = sqrt((a[i].xx - x) * (a[i].xx - x) + (a[i].yy - y) * (a[i].yy - y));
	}
	sort(a + 1, a + 1 + n, cmp);
	int gg = 1, ans = 1, i = 0;
	double g = a[1].d;
	while (gg != k + 1) {
		i++;
		if (a[i].d != g) {
			gg++;
			g = a[i].d;
		}
		if (gg == k) {
			td[ans][0] = a[i].xx;
			td[ans][1] = a[i].yy;
			ans++;
		}
	}
	ans--;
	printf("%d\n", ans);
	for (int i = 1; i <= ans; i++)
		printf("%d %d\n", td[i][0], td[i][1]);
	return 0;
}
