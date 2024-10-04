#include <bits/stdc++.h>
#define int long long
using namespace std;
string s;
int cnt = 1, t[3000];
void hs(char x) {
	int y;
	if (x == 'q') 	y = 1;
	else if (x == 'u') y = 2;
	else if (x == 'a') y = 3;
	else if (x == 'c') y = 4;
	else if (x == 'k') y = 5;
	for (int i = 1; i <= cnt; i++) {
		if (t[i] + 1 == y) {
			t[i]++;
			if (t[i] == 5)
				t[i] = 0;
			return;
		}
	}
	if (y == 1)
		t[++cnt] = 1; //新建鸭子叫到第1声
	else
		cout << -1, exit(0);
}
main() {
	freopen("quack.in", "r", stdin);
	freopen("quack.out", "w", stdout);
	cin >> s;
	int len = s.size();
	if (s[0] != 'q' || len % 5 != 0 ) {
		cout << -1;
		return 0;
	}
	for (int i = 0; i < len; i++) {
		hs(s[i]);
	}
	cout << cnt;
	return 0;
}
