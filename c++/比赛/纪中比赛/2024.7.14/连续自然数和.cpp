#include <bits/stdc++.h>
#define int long long
using namespace std;
int m, a[20000020];
main()
{
#ifdef ONLINE_JUDGE
    freopen("combo.in", "r", stdin);
    freopen("combo.out", "w", stdout);
#endif
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        a[i] = i;
        a[i] += a[i - 1];
    }
    for (int i = 1; i <= m / 2 + 1; i++)
    {
        int l = i, r = m / 2 + 1, mid;
        while (l < r)
        {
            mid = (l + r) / 2;
            if (a[mid] - a[i - 1] < m)
                l = mid + 1;
            else
                r = mid;
        }
        if (a[l] - a[i - 1] == m)
            cout << i << " " << l << endl;
    }
    return 0;
}