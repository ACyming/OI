#include <bits/stdc++.h>
using namespace std;
int n;
int a[120];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i < n; i++)
        cout << a[i] * a[i + 1] << " ";
    return 0;
}