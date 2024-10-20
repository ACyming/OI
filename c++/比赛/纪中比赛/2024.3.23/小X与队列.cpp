#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[100005];
int b[100005];
int ans[100005];
int cnt = 0;
int main()
{
#ifdef ONLINE_JUDGE
    freopen("queue.in", "r", stdin);
    freopen("queue.out", "w", stdout);
#endif
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        cin >> a[i];
    for (int i = m; i >= 1; i--) {
        if (!b[a[i]]) {
            ans[++cnt] = a[i];
            b[a[i]] = 1;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (!b[i])
            ans[++cnt] = i;
    }
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}