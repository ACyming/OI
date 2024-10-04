#include <bits/stdc++.h>
using namespace std;
long long a[200005], b[200005], f[200005];
void run()
{
    long long n = 0, m = 0;
    scanf("%lld%lld", &n, &m);
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    memset(f, 0, sizeof(f));
    for (int i = 1; i <= n; i++)
        scanf("%lld", &a[i]);
    for (int i = 1; i <= n; i++)
        scanf("%lld", &b[i]);
    for (int i = n; i >= 1; i--)
        f[i] = f[i + 1] + min(a[i], b[i]);
    for (int i = 1; i <= m; i++)
        f[i] = f[i + 1] + a[i];
    long long ans = LONG_LONG_MAX;
    for (int i = 1; i <= m; i++)
        ans = min(ans, f[i]);
    printf("%lld\n", ans);
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
        run();
    return 0;
}