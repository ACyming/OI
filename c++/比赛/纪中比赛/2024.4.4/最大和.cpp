/*#include <bits/stdc++.h>
using namespace std;
int n, m, a[5000000], ans;
int main()
{
    // freopen("two.in", "r", stdin);
    // freopen("two.out", "w", stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int x = 1, y = 1;
    int sum = 0, size = 0;
    while (x <= y && y <= n)
    {
        size++;
        y++;
        sum += a[y];
        if (a[x] < 0 || size > m)
            x++;
    }
    printf("%d", sum);
}

*/

#include <bits/stdc++.h>
using namespace std;
long long n, m, a[5000000], q[5000000], ans, sum;
int main()
{
    freopen("two.in", "r", stdin);
    freopen("two.out", "w", stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int h = 1, t = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += a[++t];
        if (a[h] < 0 || t - h >= m)
        {
            do
                sum -= a[h++];
            while (a[h] < 0);
        }

        if (t - h < m)
            ans = max(ans, sum);
    }
    printf("%lld", ans);
}
