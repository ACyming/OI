#include <bits/stdc++.h>
using namespace std;
const int N = 100010;
int n, a[N];
int cnt, ans;
void add(int x)
{
    ++cnt;
    a[cnt] = x;
    int t = cnt;
    while (a[t] < a[t / 2] && t > 1)
    {
        swap(a[t], a[t / 2]);
        t /= 2;
    }
}
void del()
{
    a[1] = a[cnt];
    --cnt;
    int t = 1;
    while (2 * t <= cnt)
    {
        int x = t * 2;
        if (x + 1 <= cnt && a[x + 1] < a[x])
            x++;
        if (a[x] < a[t])
        {
            swap(a[x], a[t]);
            t = x;
        }
        else
            break;
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i], add(a[i]);
    for (int i = 1; i < n; i++)
    {
        int xx = a[1];
        del();
        int yy = a[1];
        del();
        ans += xx + yy;
        add(xx + yy);
    }
    cout << ans;
    return 0;
}