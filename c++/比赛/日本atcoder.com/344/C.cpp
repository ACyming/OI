#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, l, a[999], b[999], c[999], q, qi;
map<long long, bool> can;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> m;
    for (int i = 1; i <= m; i++)
        cin >> b[i];
    cin >> l;
    for (int i = 1; i <= l; i++)
        cin >> c[i];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            for (int k = 1; k <= l; k++)
                can[a[i] + b[j] + c[k]] = 1;
    cin >> q;
    while (q--) {
        cin >> qi;
        if (can[qi])
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}