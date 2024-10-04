#include <bits/stdc++.h>
using namespace std;
int maxx = INT_MIN, minn = INT_MAX;
int n;
int main()
{
    cin >> n;
    int x;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        maxx = max(maxx, x);
        minn = min(minn, x);
    }
    cout << maxx - minn;
    return 0;
}