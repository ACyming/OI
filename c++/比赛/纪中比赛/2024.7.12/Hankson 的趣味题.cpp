#include <bits/stdc++.h>
using namespace std;
int n, ans;
int a0, a1, b0, b1;
int gcd(int m, int n)
{
    while (n != 0)
    {
        int t = m % n;
        m = n;
        n = t;
    }
    return m;
}
main()
{

    freopen("son.in", "r", stdin);
    freopen("son.out", "w", stdout);
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d%d%d%d", &a0, &a1, &b0, &b1);
        ans = 0;
        int x;
        for (x = 1; x <= sqrt(b1); x++)
        {
            if (b1 % x != 0)
                continue;
            if (gcd(b1 / x, a0) == a1 && (long long)b1 / x * b0 / gcd(b1 / x, b0) == b1)
                ans++;
            if (gcd(x, a0) == a1 && (long long)x * b0 / gcd(x, b0) == b1 && b1 / x != x)
                ans++;
        }
        printf("%d\n", ans);
    }
    return 0;
}