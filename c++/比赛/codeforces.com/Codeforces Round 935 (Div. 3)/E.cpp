#include <bits/stdc++.h>
using namespace std;
int t, n;
int k, x;
int a[2 * (int)1e5 + 100];
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i] == k)
                x = i;
            int l = 1, r = n + 1;
            while (r - l >= 1)
            {
                int m = (l + r) / 2;
                if (a[m] <= x)
                    l = m + 1;
                else
                    r = m - 1;
            }
            if (l == x)
            {
                cout << 0;
                continue;
            }
            else
                cout << 1 << endl
                     << l << " " << x << endl;
        }
    }
    return 0;
}