#include <bits/stdc++.h>
using namespace std;
const int N = 2 * 1e5 + 10;
int t, n, m, k;
int a[N], b[N];
int main()
{
    cin >> t;
    while (t--)
    {
        map<long long, int> mp;
        int ans = 0, sum = 0;
        cin >> n >> m >> k;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            
        }
        for (int i = 1; i <= m; i++)
            cin >> b[i],mp[b[i]]++;
        for (int i = 1; i <= m; i++)
        {
            if (mp[a[i]] > 0)
                ans++;
            mp[a[i]]--;
        }
        if (ans >= k)
            sum++;
        for (int i = 1; i <= n - m; i++)
        {
            if (mp[a[i]] > -1)
                ans--;
            mp[a[i]]++;
            if (mp[a[i + m]] > 0)
                ans++;
            mp[a[i+m]]--;
            if (ans >= k)
                sum++;
        }
        cout << sum << endl;
    }
    return 0;
 }