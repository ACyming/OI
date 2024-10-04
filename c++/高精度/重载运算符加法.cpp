#include <bits/stdc++.h>
using namespace std;
struct Node {
	int a[100000];
	Node() {
		memset(a, 0, sizeof(a));
	}
	void inn(string x) {
		int len = x.size();
		for (long long i = 1; i <= len; i++) {
			a[i] = x[len - i] - '0';
		}
		a[0] = len;
		return ;
	}
	Node operator+(Node &y) {
		Node tmp;
		tmp.a[0] = max(a[0], y.a[0]);
		for (int i = 1; i <= tmp.a[0]; i++) {
			tmp.a[i] += a[i] + y.a[i];
			tmp.a[i + 1] = tmp.a[i] / 10;
			tmp.a[i] %= 10;
		}
		return tmp;
	}
} n1, n2, n3;
string a, b;
int main() {
	cin >> a;
	char c;
	cin >> c;
	cin >> b;
	n1.inn(a);
	n2.inn(b);
	if (c == '+')
		n3 = n1 + n2;
	for (int i = n3.a[0]; i >= 1; i--) {
		cout << n3.a[i];
	}
	return 0;
}
