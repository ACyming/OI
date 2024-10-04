#include <bits/stdc++.h>
using namespace std;
int mp[305][305];
int n, q;
int x[305], y[305];
void pr()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << mp[x[i]][y[j]] << " ";
        cout << endl;
    }
    cout << endl;
}
int main()
{
#ifdef ONLINE_JUDGE
    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);
#endif
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        x[i] = i;
    for (int i = 1; i <= n; i++)
        y[i] = i;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> mp[i][j];
    for (int i = 1; i <= q; i++)
    {
        int a, b, c, d;
        cin >> a;
        if (a == 1)
        {
            cin >> b >> c >> d;
            mp[x[b]][y[c]] = d;
        }
        else if (a == 2)
        {
            cin >> b >> c;
            swap(x[b], x[c]);
        }
        else if (a == 3)
        {
            cin >> b >> c;
            swap(y[b], y[c]);
        }
        else
            pr();
    }
    return 0;
}
