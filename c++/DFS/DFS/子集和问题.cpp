#include <cstdio>
int a[2001], ans[2001], v[2001];
int n, m, r, s, o;
void fun(int x) {
	if (x == m) {
		for (int i = 1; i <= s; i++)
			printf("%d ", a[ans[i]]);
		r = 1;
		return;
	}
	for (int i = 1; i <= n; i++)
		if (x + a[i] <= m && v[i] == 0 && r == 0) {
			v[i] = 1;
			ans[++s] = i;
			fun(x + a[i]);
			v[i] = 0;
			s--;
		}
}
int main() {
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		o += a[i];
	}
	if (o < m) {
		printf("No Solution!");
		return 0;
	}
	fun(0);
	if (r == 0) printf("No Solution!");
}
