#include <bits/stdc++.h>
using namespace std;
int t;
int n, m, k;
int a[105], b[105];
int main()
{
    cin >> t;
    while (t--)
    {
        int ans = 0;
        cin >> n >> m >> k;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= m; i++)
            cin >> b[i];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (a[i] + b[j] <= k)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}