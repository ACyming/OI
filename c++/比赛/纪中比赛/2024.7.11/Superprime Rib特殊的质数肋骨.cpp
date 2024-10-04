#include<bits/stdc++.h>
using namespace std;
int n, ans[50],cnt;
bool vis[99999999];
bool prime(int x) {
	for(int i = 2; i <= sqrt(x); i++)
		if (x % i == 0) return 0;
	return 1;
}
void dfs(int x,int y) {
	if(x >= n + 1 && !vis[y]) {
		ans[++cnt] = y;
		vis[y] = 1;
		return ;
	}
	if(x == 1) {
		dfs(x + 1, 2);
		dfs(x + 1, 3);
		dfs(x + 1, 5);
		dfs(x + 1, 7);
	} else {
		for(int i = 0; i <= 9; i++) {
			if(prime(y * 10 + i))
				dfs(x + 1, y * 10 + i);
		}
	}

}
int main() {
	cin >> n;
	dfs(1, 0);
	for(int i = 1; i <= cnt ; i++)
		cout << ans[i] << endl;
	return 0;
}   