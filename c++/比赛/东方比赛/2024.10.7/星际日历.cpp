#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
int y, m, d;
main() {
    cin >> n;
    if (n % 360 == 0)
        y = n / 360;
    else
        y = n / 360 + 1;
    n %= 360;
}