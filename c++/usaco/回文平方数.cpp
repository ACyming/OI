#include <bits/stdc++.h>
using namespace std;
int n;
char d[60] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
string s1, s2, ss;
void ez(int k, int n) {
	int r;
	r = k % n;
	k = k / n;
	if (k != 0)
		ez(k, n);
	ss = ss + d[r];
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
	cin >> n;
	for (int i = 1; i <= 300; i++) {
		ss = "";
		ez(i, n);
		swap(ss, s1);
		int pw = i * i;
		ss = "";
		ez(pw, n);
		swap(ss, s2);
		if (check(s2))
			cout << s1 << " " << s2 << endl;
	}
	return 0;
}
