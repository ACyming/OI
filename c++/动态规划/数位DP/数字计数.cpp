#include<bits/stdc++.h>
#define int long long
using namespace std;
int l, r;
int ans[50], g[50][3], f[50][50][3][3], POW[20];
int dfs(int x, int h, int d, bool flag, bool f0){
	if(h == 0) {
		g[h][flag] = 1;
		return 0;
	}
	if(f[h][d][flag][f0] != -1) 
		return f[h][d][flag][f0];
	f[h][d][flag][f0] = g[h][flag] = 0;
	int up = flag == 1 ? x / POW[h - 1] % 10 : 9;
	for (int i = 0; i <= up; i++) {
		f[h][d][flag][f0] += dfs(x, h - 1, d, flag && (i == up), f0 && (i == 0));
		g[h][flag] += g[h - 1][flag && (i == up)];
		if (i == d && (d != 0 || !f0))
			f[h][d][flag][f0] += g[h - 1][flag && (i == up)] ;
	} 
	return f[h][d][flag][f0];
}
int calc(int x){
	int cnt = 0;
	while (x != 0){
		x /= 10;
		cnt++;
	}
	return cnt;
}
main()
{
	cin >> l >> r;
	int len = calc(r);
	register int i, j;
	POW[0] = 1; 
	for(i = 1; i <= 18; i++) POW[i] = POW[i - 1] * 10;
	memset(f, -1, sizeof(f)),memset(g, 0, sizeof(g));
	for(i = 0; i <= 9; i++)
		ans[i] += dfs(r, len, i, 1, 1);
	if (l != 0) {
		memset(f, -1, sizeof(f)),memset(g, 0, sizeof(g));
		len = calc(l - 1);
		for (i = 0; i <= 9; i++){
			ans[i] -= dfs(l - 1, len ,i ,1 ,1);
		}
	}
	for(int i = 0; i <= 9; i++)
		cout << ans[i] <<" ";
	return 0;
}