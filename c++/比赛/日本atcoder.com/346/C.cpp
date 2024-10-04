#include <bits/stdc++.h>
#define int unsigned long long
using namespace std;
int n, k;
int a[2 * (int)1e5 + 90];
int ans;
main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] == a[i - 1] && i >= 2)
            a[i - 1] = 0;
    }
    sort(a + 1, a + 1 + n);
    for (int i = 1; i <= n; i++) {
        if (a[i] == a[i - 1] && i >= 2)
            a[i - 1] = 0;
    }
    ans = (1 + k) * k / 2;
    for (int i = 1; i <= n; i++) {
        if (a[i] <= k)
            ans -= a[i];
        else
            break;
    }
    cout << ans;
    return 0;
}