#include <bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f
const int N = 220;
int p;
int a[N][N], d[N];
int f[N];
char x, y;
int main() {
	cin >> p;
	int l;
	for (int i = 1; i <= p; i++) {
		cin >> x >> y >> l;
		if (a[x][y] == 0 || l < a[x][y])
			a[x][y] = a[y][x] = l;
	}
	memset(d, 0x3f, sizeof(d));
	d['Z'] = 0;
	string s;
	for (char i = 'A'; i <= 'Z'; i++)
		s += i;
	for (char i = 'a'; i <= 'z'; i++)
		s += i;
	for (int i = 0; i < s.size(); i++) {
		int mi = -1;
		for (int j = 0; j < s.size(); j++) {
			if (!f[s[j]] && (mi == -1 || d[mi] > d[s[j]])) {
				mi = s[j];
			}
		}
		f[mi] = true;
		for (int j = 0; j < s.size(); j++) {
			if (!f[s[j]] && a[mi][s[j]] && d[s[j]] > d[mi] + a[mi][s[j]]) {
				d[s[j]] = d[mi] + a[mi][s[j]];
			}
		}
	}
	int e = 0, mi = inf;
	for (int i = 0; i < 25; i++) {
		if (d[s[i]] < mi) {
			mi = d[s[i]];
			e = i;
		}
	}
	cout << s[e] << " " << mi;
	return 0;
}
