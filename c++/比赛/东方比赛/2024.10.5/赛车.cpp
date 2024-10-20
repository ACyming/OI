#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, t;
int r[1020];
main() {
    cin >> n >> t;
    for (int i = 1; i <= n; i++)
        cin >> r[i];
    while (t--) {
        int maxx = 0, num = 0;
        for (int i = 1; i <= n; i++) {
            if (maxx < r[i]) {
                maxx = r[i];
                num = i;
            }
        }
        int a = r[num] / (n - 1), b = r[num] % (n - 1);
        r[num] = 0;
        for (int i = 1; i <= n; i++) {
            if (i == num)
                continue;
            if (b) {
                r[i] += 1;
                b--;
            }
            r[i] += a;
        }
        cout << num << endl;
    }
    return 0;
}
