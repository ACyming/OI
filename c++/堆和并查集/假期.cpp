#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, p, q;
int a[100010];
struct GG
{
    int sum;
    int v;
};
bool operator<(GG a, GG b)
{
    return a.sum > b.sum;
}
priority_queue<GG> h;
main()
{
    scanf("%lld%lld%lld", &n, &p, &q);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
        a[i] += a[i - 1];
    }
    int t = LONG_LONG_MIN;
    for (int i = p + 1; i <= n; i++)
    {
        h.push({a[i - p], i - p});
        while (i - h.top().v > q)
            h.pop();
        t = max(t, a[i] - h.top().sum);
    }
    printf("%lld", t);
    return 0;
}