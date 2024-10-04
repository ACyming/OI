#include <bits/stdc++.h>
using namespace std;char s[20][20], e[20][20],g[20][20], tmp[20][20];int n;
void ty() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			cout << g[i][j];
		cout << endl;
	}
}
void scan() {
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> s[i][j];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> e[i][j];
}
bool check() {
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (g[i][j] != e[i][j])
				return 0;
	return 1;
}
void No1() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			g[i][j] = s[n - j + 1][i];
		}
	}
}
void No2() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			g[i][j] = s[n - j + 1][i];
		}
	}
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			tmp[i][j] = g[i][j];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			g[i][j] = tmp[n - j + 1][i];
		}
	}
}
void No3() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			g[i][j] = s[n - j + 1][i];
		}
	}
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			tmp[i][j] = g[i][j];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			g[i][j] = tmp[n - j + 1][i];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			tmp[i][j] = g[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			g[i][j] = tmp[n - j + 1][i];
		}
	}
}
void No4() {
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			g[i][j] = s[i][j];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n / 2; j++) {
			swap(g[i][j], g[i][n - j + 1]);
		}
	}
}
void No5() {
	No4();
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			tmp[i][j] = g[i][j];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			g[i][j] = tmp[n - j + 1][i];
//	ty();
	if (check()) {
		cout << 5;
		exit(0);
	}
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			tmp[i][j] = g[i][j];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			g[i][j] = tmp[n - j + 1][i];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			tmp[i][j] = g[i][j];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			g[i][j] = tmp[n - j + 1][i];
//	ty();
	if (check()) {
		cout << 5;
		exit(0);
	}
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			tmp[i][j] = g[i][j];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			g[i][j] = tmp[n - j + 1][i];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			tmp[i][j] = g[i][j];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			g[i][j] = tmp[n - j + 1][i];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			tmp[i][j] = g[i][j];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			g[i][j] = tmp[n - j + 1][i];
//	ty();

	if (check()) {
		cout << 5;
		exit(0);
	}
}
void No6() {
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (s[i][j] != e[i][j])
				return ;
	cout << 6;
	exit(0);
}
void run() {
	No1();
	if (check()) cout << 1, exit(0);
//	cout << 1 << endl;
//	ty();
	No2();
//	cout << 2 << endl;
//	ty();
	if (check()) cout << 2, exit(0);
	No3();
//	cout << 3 << endl;
//	ty();
	if (check()) cout << 3, exit(0);
	No4();
//	cout << 4 << endl;
//	ty();
	if (check()) cout << 4, exit(0);
	No5();
//	cout << 5 << endl;
//	ty();
//	No6();
//	cout << 6 << endl;
//	ty();
	cout << 7;
	exit(0);
}
int main() {
	scan();
	run();
	return 0;
}
