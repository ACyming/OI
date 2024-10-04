//770 77 5	77*5=385	2*385=770 770/2*5=77
//2 385
#include <bits/stdc++.h>
using namespace std;
int n, a[1020], b[1020], c[1020];
int yh, ans;
int main() {
	cin >> n;
	for (int i = 1; i <= n+1; i++) {
		cin >> a[i] >> b[i] >> c[i];
		if (a[i] == 0) {
			yh++;
			ans += b[i];
		} else  {
			if (yh > 0 && c[i] - c[i - 1] <= 45) {
				yh--;
			} else {
				ans += b[i];
				yh = 0;
			}
		}
		cout<<ans<<endl;
	}
	cout << ans;
	return 0;
}
//10+12+3+5+6
