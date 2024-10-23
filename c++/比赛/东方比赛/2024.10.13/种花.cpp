#include <bits/stdc++.h>
using namespace std;
int n, m, k, c;
int a[5020];
int main()
{
    cin >> n >> m >> k >> c;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int sum, cnt, ans = 0;

    for (int i = 1; i <= n; i++)
    {
        if (a[i] >= m)
            continue;
        cnt = (m - a[i]) / c + ((m - a[i]) % c != 0); ans += cnt;
        sum = cnt * c;
       
        for (int j = i; j <= min(i + k - 1, n); j++)
        {
            if (a[j] >= m)
                continue;
            if (m - a[j] <= sum)
            {
                sum = sum - (m - a[j]);
                a[j] = m;
            }
            else
            {
                a[j] = a[j] + sum;
                break;
            }
        }
    }
    cout << ans;
    return 0;
}
