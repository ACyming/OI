#include <bits/stdc++.h>
#define int long long
using namespace std;
int t;
int n, c, d;
int b[255555], a[1000][1000], cc[255555];

main()
{
    cin >> t;
    while (t--)
    {

        cin >> n >> c >> d;
        for (int i = 1; i <= n * n; i++)
            cin >> b[i];
        sort(b + 1, b + 1 + n * n);
        a[1][1] = b[1];
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                a[i + 1][j] = a[i][j] + c;
                a[i][j + 1] = a[i][j] + d;
                cnt++;
                cc[cnt] = a[i][j];
            }
        }
        sort(cc + 1, cc + 1 + n * n);
        bool flag = 1;
        for (int i = 1; i <= n * n; i++)
            if (cc[i] != b[i])
            {
                cout << "No" << endl, flag = 0;
                break;
            }
        if (flag)
            cout << "Yes" << endl;
    }
    return 0;
}