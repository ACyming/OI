#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a, b;
int d[2 * (int)1e5 + 1000], nxt;
int hs(int x) {
    for (int i = 1; i <= n; i++) {
        if ((x + d[i]) % (a + b) > a || (x + d[i]) % (a + b) == 0)
            return i;
    }
    cout << "Yes";
    exit(0);
}
main() {
    cin >> n >> a >> b;
    register int i, j, x;
    for (i = 1; i <= n; i++) {
        cin >> d[i];
    }
    int w;
    for (int i = 1; i <= (a + b) * 2;
         i += (a + b) - ((i + d[w]) % (a + b)) + 1) {
        w = hs(i);
    }
    cout << "No";
    return 0;
}