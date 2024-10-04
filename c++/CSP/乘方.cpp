#include <bits/stdc++.h>
using namespace std;
long long a, b;
int main()
{
    cin >> a >> b;
    if (pow(a, b) <= (int)1e9)
        cout << int(pow(a, b));
    else
        cout << -1;
    return 0;
}