#include <bits/stdc++.h>
using namespace std;
int cnt, a[9999];
int main()
{
    while (cin >> a[++cnt])
        ;
    for (int i = cnt-1; i >= 1; i--)
        cout << a[i] << endl;
    return 0;
}