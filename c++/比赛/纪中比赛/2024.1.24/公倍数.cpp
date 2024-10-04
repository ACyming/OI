#include <bits/stdc++.h>
#define int long long
using namespace std;
int x, z, s = 1;
int gcb(int m, int n) {
    int r = 0;
    while (r = m % n) {
        m = n;
        n = r;
    }
    return n;
}
main() {
    //	freopen("c.in", "r", stdin);
    //	freopen("c.out", "w", stdout);
    cin >> x >> z;
    int k = z / x;
    int d = gcb(k, x);
    while (d > 1) {
        d = gcb(k, x);
        s *= d;
        x /= d;
    }
    cout << s * k;
    return 0;
}
