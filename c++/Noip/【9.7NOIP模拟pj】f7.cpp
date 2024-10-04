#include <bits/stdc++.h>
using namespace std;
int n, a[300001];
int cnt, maxx;
int main()
{
    cin >> n;
    int cc = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        maxx = max(maxx, a[i]);
        if (a[i] == maxx)
            cc++;
    }
    sort(a + 1, a + 1 + n);
    for (int i = 1; i <= n; i++)
    {
        if (abs(maxx + cc - a[i]) <= n)
            cnt++;
            else{
                cout<<cc<<" "<<a[i]<<endl;
            }
    }
    cout << cnt;
    return 0;
}