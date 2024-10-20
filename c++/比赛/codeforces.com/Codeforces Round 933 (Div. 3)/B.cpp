#include <bits/stdc++.h>
using namespace std;
int t, n;
int a[200005];
int main()
{
    cin >> t;
    while (t--)
    {
        bool p = 1;
        cin >> n;
        a[n+1]=a[n-2]=0; 
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
        {
            if (a[i + 1] >= a[i] * 2 && a[i + 2] >= a[i])
            {
                a[i + 1] -= a[i] * 2;
                a[i + 2] -= a[i];
                a[i] = 0;
            }
            else
            {
                p = 0;
            }
        }
        if (p)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}