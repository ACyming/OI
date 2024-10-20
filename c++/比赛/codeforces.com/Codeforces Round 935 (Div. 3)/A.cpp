#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a, b, c;
int ans;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ans = 0;
        cin >> a >> b >> c;
        ans += a;
        if ((b % 3 + c) < 3 && b % 3 != 0)
        {
            cout << -1 << endl;
            continue;
        }
        ans += (b + c) / 3;
        int x = (b + c) % 3;
        while (x != 0)
        {
            if (x - 3 >= 0)
            {
                ans++;
                x -= 3;
            }
            else if (x - 2 >= 0)
            {
                ans++;
                x -= 2;
            }
            else if (x - 1 >= 0)
            {
                ans++;
                x--;
            }
        }
        cout << ans << endl;
    }
    //	cout<<(b+c)/3;
    return 0;
}