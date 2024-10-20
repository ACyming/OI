#include <bits/stdc++.h>
using namespace std;
int n, a[119000], num;
int main()
{
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        num += a[i];
    }
    cout << -num;
    return 0;
}