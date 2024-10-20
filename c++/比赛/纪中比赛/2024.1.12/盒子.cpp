#include <bits/stdc++.h>
using namespace std;
long long n, a[500020], ans;
bool vis[500020];
bool cmp(int x, int y) {return x > y;}
long long maxx = -0x3f3f3f3f;
void dfs(long long x) {
	for (long long i = x; i < n; i++)
		if (a[i] < a[x] && !vis[i])
			vis[i] = 1,dfs(i);
	for (long long i = 1; i <= n; i++)
		if (a[i] > maxx && !vis[i])
			vis[i] = 1, ans++, dfs(i);
}
void scan() {
	cin >> n;
	for (long long i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + 1 + n, cmp);
	vis[1] = 1;
	dfs(1); 
}
int main() {
	freopen("box.in", "r", stdin);
	freopen("box.out", "w", stdout);
	scan();
	cout << ans;
	return 0;
} 
