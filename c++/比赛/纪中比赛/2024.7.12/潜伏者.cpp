#include <bits/stdc++.h>
using namespace std;
string a, b, c;
int bz[300], yuan[300];
int main()
{
    freopen("spy.in", "r", stdin);
    freopen("spy.out", "w", stdout);
    cin >> a >> b >> c;
    for (int i = 0; i < a.size(); i++)
    {
        yuan[b[i]]++;
        if (bz[a[i]] == b[i] || bz[a[i]] == 0)
            bz[a[i]] = b[i];
        else
        {
            cout << "Failed";
            return 0;
        }
    }
    for (char i = 'A'; i <= 'Z'; i++)
    {
        if (!yuan[i])
        {
            cout << "Failed";
            return 0;
        }
    }
    for (int i = 0; i < c.size(); i++)
    {
        cout << (char)bz[c[i]];
    }
    return 0;
}