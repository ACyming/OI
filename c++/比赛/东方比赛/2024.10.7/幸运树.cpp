#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 10;
int n;
int a[N], s[N];
main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i], s[i] = a[i] + a[i - 1];
    int b, e;
    int maxx = 0, dep;
    for (int i = 1;; i++) {
        b = (1 << i - 1);
        e = (1 << i) - 1;
        int t = min(e, n);
        if (s[t] - s[b - 1] > maxx) {
            maxx = s[t] - s[b - 1];
            dep = i;
        }
        if (e >= n)
            break;
    }
    cout << dep;
    return 0;
}
