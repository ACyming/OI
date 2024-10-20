#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f;
int t, n;
int a[100][100], d[100][100];
char x, y, v;
int cnt, c;
int main() {
	cin >> t;
	while (t--) {
		cin >> n;
		cnt++;
		memset(d, 0x3f, sizeof(d));
		memset(a, 0x3f, sizeof(a));
		for (int i = 'A'; i <= 'Z'; i++) {
			d[i][i] = 0;
		}
		for (int i = 1; i <= n; i++) {
			cin >> x >> v >> y;
			if (v == '<') a[x][y] = d[x][y] = 1;
			else a[y][x] = d[y][x] = 1;
		}
		for (char k = 'A'; k <= 'Z'; k++) {
			for (char i = 'A'; i <= 'Z'; i++) {
				for (char j = 'A'; j <= 'Z'; j++) {
					if (d[i][k] != INF && d[k][j] != INF)
						d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

				}
			}
		}
		c = 0;
		cout << "Case " << cnt << ":" << endl;
		for (char i = 'A'; i <= 'Z'; i++) {
			for (char j = 'A'; j <= 'Z'; j++) {
				if (a[i][j] == INF && d[i][j] != INF && d[i][j] != 0)
					cout << i << "<" << j << endl, c++;
			}
		}
		if (c == 0) cout << "NONE" << endl;
	}

	return 0;
}
