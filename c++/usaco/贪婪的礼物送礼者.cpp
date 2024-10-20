#include <bits/stdc++.h>
using namespace std;
int n;
map <string, int> na;
struct Node {
	string name;
	int m1;
	int m2;
} p[20];
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		cin >> p[i].name;
		na[p[i].name] = i;
	}
	string c;
	int a, b;
	for (int i = 1; i <= n; i++) {
		cin >> c;
		int k = na[c];
		scanf("%d%d", &a, &b);
		if (b == 0) 
			continue;
		p[k].m1 = a;
		for (int j = 1; j <= b; j++) {
			cin >> c;
			p[na[c]].m2 += p[k].m1 / b;
			p[k].m1 = p[k].m1 / b * b;
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << p[i].name << ' ';
		printf("%d\n", p[i].m2 - p[i].m1);
	}
	return 0;
}
