#include <bits/stdc++.h>
using namespace std;
int cnt;
char d[11] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
string ss;
int cmp;
//bool bz[10020];
void ez(int k, int n) {
	int r;
	r = k % n;
	k = k / n;
	if (k != 0)
		ez(k, n);
	ss = d[r] + ss;
	return;
}
bool check(string s) {
	int head = 0, tail = s.size() - 1;
	while (head < tail) {
		if (s[head] != s[tail])
			return false;
		head++;
		tail--;
	}
	return true;
}
int main() {
	int n, s;
	cin >> n >> s;
	for (int i = s + 1;; i++) {
		if (cnt == n) {
			return 0;
		}
		cmp = 0;
		for (int j = 2; j <= 10; j++) {
			ss = "";
			ez(i, j);
			if (check(ss)) cmp++;
			if (cmp >= 2) {
				cout << i << endl;
				cnt++;
				break;
			}
		}

	}
	return 0;
}
