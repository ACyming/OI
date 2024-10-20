#include <bits/stdc++.h>
using namespace std;
const int N = 1e9 + 20;
int n, ans, day, cnt;
bool bz = 1;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	freopen("apple.in","r",stdin);
	freopen("apple.out","w",stdout); 
	cin >> n;
	int xx = n;
	while (xx != 0) {
		day++;
		if (bz && xx % 3 == 1) {
			cnt = day;
			bz = 0;
		}
		xx -= (xx + 2) / 3;
	}
	cout << day << " " << cnt;
	return 0;
}
