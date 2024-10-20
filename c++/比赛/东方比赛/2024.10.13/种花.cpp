#include <bits/stdc++.h>
using namespace std;
int n, m, k, c;
int a[5020];
int main() {
    cin >> n >> m >> k >> c;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    if (c == 1) {
        int ans = 0;
        for (int i = 1; i <= n; i++)
            ans += (m - a[i]);
        cout << ans;
        return 0; 
    } else if (k == 1) {
        int ans = 0;
        for (int i = 1; i <= n; i++)
            ans += ceil((m - a[i]) * 1.0 / c);
        cout << ans;
        return 0; 
    }
    int sum, cnt;
    int ans = 0;
    for(int i=1;i<=n;i++) {
    	if(a[i]>=m) continue;
    	cnt = ceil((m - a[i]) * 1.0 / c);
    	sum = cnt * c;
    	ans += cnt;
    	if(m-a[i] <= sum) {
    		sum -= (m-a[i]);
    		a[i] = m;
		} else {
			a[i] = a[i] + sum;
			sum = 0;
		}
	}
	cout << ans;
    return 0;
}
