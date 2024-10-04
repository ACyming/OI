#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2 * 1e5 + 10;
int t, n, a, b;

main()
{
    cin >> t;
    while (t--)
    {
        int ans = 0;
        cin >> n >> a >> b;
        int a2 = 2 * a;
        if (a2 > b)
        {
            ans += (n / 2) * b;
            n = (n % 2);
            ans += n * a;
        }
        else
            ans = n * a;
        cout << ans << endl;
    }
    return 0;
}