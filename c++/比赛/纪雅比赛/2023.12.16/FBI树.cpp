#include <bits/stdc++.h>
using namespace std;
char s[1025];
void FBI_open_the_door(int l, int r) {
	int mid = (l + r) / 2;
	if (l != r) {
		FBI_open_the_door(l, mid);
		FBI_open_the_door(mid + 1, r);
	}
	int a = 0, b = 0;
	for (int i = l; i <= r; i++)
		if (s[i] == '0')
			a++;
		else
			b++;
	if (a && b)
		cout << "F";
	else if (a)
		cout << "B";
	else
		cout << "I";
}
int main() {
	freopen("fbi.in", "r", stdin);
	freopen("fbi.out", "w", stdout);
	int n;
	cin >> n;
	cin >> s + 1;
	FBI_open_the_door(1, pow(2, n));
	return 0;
}
