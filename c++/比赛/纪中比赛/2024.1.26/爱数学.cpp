#pragma GCC optimize(2)
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, k, a[50];
int ans;
bool bz[50];
bool pd(int x) {
	if (x < 2) return 0;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0) return 0;
	return 1;
}
void dfs(int x, int cnt,int y) {
	
	if (y > k) {
		if (pd(cnt))
			ans++;
		return ;
	}
	if(x>n)
		return ;
	dfs(x+1,cnt+a[x],y+1);
	dfs(x+1,cnt,y);
}
main() {
#ifdef ONLINE_JUDGE
	freopen("num.in","r",stdin);
	freopen("num.out","w",stdout);
#endif
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	dfs(1,0,1);
	cout << ans;
	return 0;
}
/*
4 3
3 7 12 19
*/
