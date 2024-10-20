#include <bits/stdc++.h>

using namespace std;
long long n, ans, a[2 * (long long)1e5], ch[2 * (long long)1e5];
main()
{
    freopen("bacteria.in", "r", stdin);
    freopen("bacteria.out", "w", stdout);
    for (long long i = 1; i <= 559059299; i++);
    cin >> n;
    for (long long i = 1; i <= n; i++) {
        cin >> a[i];
        ch[i] = a[i] - a[i - 1];
        ans += abs(ch[i] - ch[i - 1]);
    }
    
    cout << ans;
    return 0;
}