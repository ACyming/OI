#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, k;
main()
{
    cin >> n >> m >> k;
    int G = n * m / __gcd(n, m);
    int l = __gcd(n, m), r = LONG_LONG_MAX;
    int mid = (l + r) / 2;
    while (l <= r) {
        mid = (l + r) / 2;
        if (mid / n + mid / m - 2 * (mid / G) < k)
            l = mid + 1;
        else
            r = mid - 1;
    }
    printf("%lld", l);
    return 0;
}