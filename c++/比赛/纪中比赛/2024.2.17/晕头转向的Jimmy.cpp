#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, c;
int fx = 1, x = 1, y = 1;
char ans[1005][1005];
void pr(){
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << ans[i][j];
		}
		cout << endl;
	}
}
main() {
#ifdef ONLINE_JUDGE
	freopen("fainted.in", "r", stdin);
	freopen("fainted.out", "w", stdout);
#endif
	cin >> n >> m >> c;

	memset(ans, '.', sizeof(ans));
	if (c == 0) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cout << ans[i][j];
			}
			cout << endl;
		}
		return 0;
	}
	ans[1][1] = '#';
	for (int i = 1; i < c; i++) {
		if (fx == 1) y++;
		if (fx == 2) x++;
		if (fx == 3) y--;
		if (fx == 4) x--;
		if (x > n) x = 1;
		if (x < 1) x = n;
		if (y > m) y = 1;
		if (y < 1) y = m;
		ans[x][y] == '#' ? ans[x][y] = '.' : ans[x][y] = '#';
		if (ans[x][y] == '#') {
			fx++;
			if (fx > 4) fx = 1;
		} else if (ans[x][y] == '.') {
			fx--;
			if (fx < 1) fx = 4;
		}
		pr();
		_sleep(100);
		system("cls");
//		cout << fx << endl;
	}
	
	return 0 ;
}
