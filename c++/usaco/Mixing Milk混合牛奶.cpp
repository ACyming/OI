#include <bits/stdc++.h>
using namespace std;
struct node {
	int p, a;
} b[100010];
bool cmp(const node &a, const node &b) {
	return a.p < b.p;
}
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		cin >> b[i].p >> b[i].a;
	}
	sort(b + 1, b + m + 1, cmp);
	int i = 1, sum = 0;
	while (n != 0) {
		if (b[i].a != 0) {
			b[i].a--;
			sum += b[i].p;
			n--;
		} else 
			i++;
	}
	cout << sum << endl;
	return 0;
}
