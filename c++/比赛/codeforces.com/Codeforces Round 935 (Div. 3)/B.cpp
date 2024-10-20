#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
int ans;
int a, b, m;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b >> m;
        cout << (a + m) / a + (b + m) / b << endl;
    }
    return 0;
}
