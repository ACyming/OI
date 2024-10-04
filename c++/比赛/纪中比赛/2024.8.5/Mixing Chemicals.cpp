#include <bits/stdc++.h>
#define int long long 
using namespace std;
int t, n, k, ans, a[200];
int f[200], flag[200], bz[200], cnt;
const int mod=1000000007;
int dfs(int x)
{
	if (bz[x]) return x;
	bz[x] = 1;
	return dfs(a[x]);
}
void duang(int x)
{
	if (bz[x]) return;
	bz[x] = flag[x] = 1;
	cnt++;
	duang(a[x]);
}
main()
{
	
	freopen("mix.in", "r", stdin);
	freopen("mix.out", "w", stdout);
	scanf("%lld", &t);
	while (t--) {
		
		memset(flag, 0, sizeof(flag));
		scanf("%lld%lld", &n, &k);
		int ans = 1, sum = n;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		f[1] = k, f[2] = k * (k - 1), f[3] = f[2] * (k - 2) % mod;
		for (int i = 4; i <= n; i++)
			f[i]=(f[i-1]*(k-2)%mod)+(f[i-2]*(k-1)%mod),f[i]%=mod;
		for (int i = 0; i < n; i++) {
			if (flag[i])
				continue;
			cnt = 0;
			memset(bz, 0, sizeof(bz));
			int t = dfs(i) /*, sum = n*/;
			if (t != i) continue;
			memset(bz, 0, sizeof(bz));
			duang(i);
			sum -= cnt;
			ans*=f[cnt];
			ans%=mod;
		}
		for (int i = 1; i <= sum; i++)
			ans *= (k - 1),ans%=mod;
		cout << ans << endl;
	}
	return 0;
}