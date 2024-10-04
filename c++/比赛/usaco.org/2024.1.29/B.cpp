#include <bits/stdc++.h>
// #define int long long
using namespace std;
int n, s;
int q[10000020];
int v[10000020];
int ts = 1;
bool vis[10000020];
int ans, sum,db;
main()
{

    cin >> n >> s;
    for (int i = 1; i <= n; i++) {
        cin >> q[i] >> v[i];
        if (q[i] == 1)
            sum++;
    }
    while (s > 0 && s <= n) {
    	db++;
    	if(db>10000000)
    		break;
        if (q[s] == 0) {
            if (ts < 0)
                ts = -(ts - v[s]);
            else
                ts = -(ts + v[s]);
        } else if (q[s] == 1) {
            if (!vis[s] && abs(ts) >= v[s]) {
                vis[s] = 1;
                ans++;
                if (ans == sum) {
                    cout << ans;
                    return 0;
                }
            }
        }
        s += ts;
    }
    cout << ans;
    return 0;
}
