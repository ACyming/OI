#include <bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, greater<int> >q;
int n, x;
int main() {

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		q.push(x);
	}
	for (int i = 1; i <= n; i++) {
		cout << q.top() << endl;
		q.pop();
	}
	return 0;
}
