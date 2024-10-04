#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int ct[999999];
int ans;
int n, t, p, c;
struct node {
	int t, x;
};
queue<node> q;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> t >> p;
		for (int j = 1; j <= p; j++) {
			cin >> c;
			q.push(node({t, c}));
			if (ct[c] == 0)
				ans++;
			ct[c]++;
		}
		while (q.back().t - q.front().t >= 86400) {
			if (--ct[q.front().x] == 0)
				ans--;
			q.pop();
		}
		cout << ans << endl;
	}
	return 0;
}
