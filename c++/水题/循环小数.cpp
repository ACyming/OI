#include <bits/stdc++.h>
using namespace std;
int n, cnt, cnt2;
string s, xh;
void xhj() {
	cout << s.find(".") + 2 << " " << s.find("(") - 1;
	for (int i = s.find(".") + 2; i < s.find("(") - 1; i++)
		cnt2++;
	for (int i = s.find(".") + 1; i <= s.size(); i++) {
		if (s[i - 1] == '(') {
			while (s[i] != ')') {
				xh[cnt] = s[i];
				cnt++;
				i++;
			}
			return ;
		}
	}
}
int main() {
	cin >> n;
	cin >> s;
	xhj();
	if (n <= cnt2) {
		cout << s[n + 1];
		return 0;
	}
//	for (int i = 1; i <= ceil(n / xh.size()); i++) {
//		xh += xh;
//	}
	for (int i = 0; i < xh.size(); i++) {
		cout << xh[i];
	}
	cout << xh[n % cnt - 1];

	return 0;
}
