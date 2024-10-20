#include<bits/stdc++.h>
#define int long long
using namespace std;
int a, b;
int f[50][50][50][2][2],p[20];
int dfs(int x,int y,int d,int flag,int f02,int f0) {
	if(x == 0) return 1;
	if(f[x][y][d][f02][f0] != -1 && !flag) return f[x][y][d][f02][f0];
	int up  = flag ? p[x] : 9, ans = 0;
	for (int i = 0; i <= up; i++) {
		if ((!f02 && y == i) || (!f0 && d == i)) continue;
		ans+= dfs(x - 1, d, i, flag && i == up, f02 && !d ,f0 && !i);
	}
	if(!flag) f[x][y][d][f02][f0] = ans;
	return  ans;
	
}
int calc(int x){
	memset(f, -1, sizeof(f));
	memset(p,0,sizeof p);
	p[0]=-1;
	int cnt = 0;
	while(x) {
		p[++cnt] = x % 10;
		x /= 10;
	}
	return dfs(cnt, 0, 0, 1, 1, 1);                                                                                                                                    
}
main() {
	scanf("%lld%lld",&a, &b);
	int ans = calc(b);
	cout << ans - calc(a - 1);
	return 0;
}