#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a[2 * (int)1e5 + 20], s[2 * (int)1e5 + 20], t[2 * (int)1e5 + 20];
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i < n; i++)
        cin >> s[i] >> t[i];
    for (int i = 2; i <= n; i++) {
        a[i] += a[i - 1] / s[i - 1] * t[i - 1];
        // cout << a[i] << " ";
    }
    cout << a[n];
    return 0;
}
