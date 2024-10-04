#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, q;
int ans;
map<long long, bool> b;
main()
{
    cin >> n >> q;
    for (int i = 1; i <= q; i++)
    {
        int a;
        cin >> a;
        if (b[a] == 0)
        {
            ans++;
            b[a] = 1;
        }
        else
        ans--,b[a]=0;
    }
    // cout<<ans;
    cout << n - ans;
    return 0;
}