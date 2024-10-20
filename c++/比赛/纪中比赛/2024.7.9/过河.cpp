#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1000005;
int l, s, t, m, ans;
int a[N], f[N], mp[N], dis[N];
main()
{

    scanf("%d", &l);
    scanf("%d %d %d", &s, &t, &m);
    for (int i = 1; i <= m; i++)
        scanf("%d", &a[i]);
    if(s == t) {
        int ans = 0;
        for (int i = 1; i <= m; i ++)
            if(a[i] % s == 0) ans++;
        cout << ans;
        return 0;
    }
    sort(a + 1, a + 1 + m);
    for (int i = 1; i <= m; i++) {
        if (a[i] - a[i - 1] > t * s)
            dis[i] = dis[i - 1] + t * s;
        else
            dis[i] = dis[i - 1] + (a[i] - a[i - 1] /*石子距离*/);
        mp[dis[i]] = 1;
    }
    memset(f, 0x3f, sizeof(f));
    int n = s * t * m + t;
    f[0] = 0;
    for (int i = 1; i <= n; i++) {
        for(int j = s; j <= t; j++) {
            if(i >= j) {
                f[i] = min(f[i - j] + mp[i], f[i]);
            }
        }
    }
    int ans = INT_MAX;
    for(int i = dis[m]; i <= n; i++)
        ans = min(ans, f[i]);
    cout << ans;
    return 0;
}