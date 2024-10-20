#include <bits/stdc++.h>
using namespace std;
int m, s, c;
int a[202], b[202];
bool cmp(int xx, int yy)
{
    return xx > yy;
}
int main()
{
    cin >> m >> s >> c;
    for (int i = 1; i <= c; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + c); 
    for (int i = 1; i < c; i++)
        b[i] = a[i + 1] - a[i] - 1;
    sort(b + 1, b + c, cmp);
    int ans = a[c] - a[1] + 1;
    for (int i = 1; i < m; i++)
        ans -= b[i];
    cout << ans;
    return 0;
}