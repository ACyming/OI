#include<bits/stdc++.h>
using namespace std;
int L,R,f[50][50][50][50];
int p[1000000];
int dfs(int x,int h,int hh,int flag) {
	if (x == 0) return 1;
	if (f[x][h][hh][flag] != -1) return f[x][h][hh][flag];
	f[x][h][hh][flag]=0;
	int up = flag ? p[x] : 1,ans=0;
	for (int i = 0; i <= up ;i ++)
		if (hh == 2 || i != hh || i != h)
			f[x][h][hh][flag] += dfs(x - 1, hh&1, (i==0&&hh==2?2:i), flag && i == up);
    return f[x][h][hh][flag];
}
int calc(int x){
	memset(f, -1, sizeof(f));
	int ans = 0;
	while (x != 0){
		p[++ans] = x % 2;
		x /= 2;
	}
	dfs(ans, 0, 2, 1);
} 
int main() {
	
	freopen("d.in", "r", stdin);
	freopen("d.out", "w", stdout);
	cin >> L >> R;
	int ans = R-L+1-calc(R);
	if(L)
		ans += calc(L - 1);
	cout << ans;
	return 0;
} 