#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 200100;
int n, a[N];
int cnt, ans;
void add(int x)
{
    ++cnt;
    a[cnt] = x;
    int t = cnt;
    while (a[t] < a[t >> 1] && t > 1)
    {
        swap(a[t], a[t >> 1]);
        t >>= 1;
    }
}
void del()
{
    a[1] = a[cnt];
    --cnt;
    int t = 1;
    while (t << 1 <= cnt)
    {
        int x = t << 1;
        if (x + 1 <= cnt && a[x + 1] < a[x])
            x++;
        if (a[x] >= a[t])
            break;
        swap(a[x], a[t]);
        t = x;
    }
}
main()
{
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++)
        scanf("%lld", &a[i]), add(a[i]);
    for (int i = 1; i <= n; i++)
    {
        printf("%lld\n",a[1]);
        del();
    }
    return 0;
}