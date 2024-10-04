#include <bits/stdc++.h>
using namespace std;
int n, q;
int w[8020];
struct GG
{
    int x, num;
} a[8020];
int read()
{
    int x = 0;
    char c = getchar();
    while (c < 48 || c > 57)
        c = getchar();
    while (c > 47 && c < 58)
        x = (x << 1) + (x << 3) + c - 48, c = getchar();
    return x;
}
void write(int x)
{
    if (x > 9)
        write(x / 10);
    putchar(x % 10 + 48);
}
bool cmp(GG xx, GG yy)
{
    if (xx.x != yy.x)
        return xx.x < yy.x;
    else
        return xx.num < yy.num;
}
int main()
{
#ifdef ONLINE_JUDGE
    freopen("sort.in", "r", stdin);
    freopen("sort.out", "w", stdout);
#endif
    n = read();
    q = read();
    for (int i = 1; i <= n; i++)
        a[i].x = read(), a[i].num = i;
    sort(a + 1, a + 1 + n, cmp);
    for (int i = 1; i <= n; i++)
        w[a[i].num] = i;
    while (q--)
    {
        int x, y, z;
        x = read();
        y = read();
        if (x == 2)
        {
            write(w[y]);
            puts("");
            continue;
        }
        if (x == 1)
        {
            z = read();
            a[w[y]].x = z;
            for (int i = 1; i < n; i++)
                if (cmp(a[i + 1], a[i]))
                    swap(a[i + 1], a[i]);
            for (int i = n; i > 1; i--)
                if (cmp(a[i], a[i - 1]))
                    swap(a[i], a[i - 1]);
            for (int i = 1; i <= n; i++)
                w[a[i].num] = i;
        }
    }
    return 0;
}