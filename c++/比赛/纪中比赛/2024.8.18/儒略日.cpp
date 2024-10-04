#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 146097;
int T, d[N], m[N], y[N];
int n, t;
inline int calc(int y, int m) {
    if (m == 2)
        return y % 4 ? 28 : y % 100 ? 29 : y % 400 ? 28 : 29;
    return m == 4 || m == 6 || m == 9 || m == 11 ? 30 : 31;
}
main() {
    freopen("julian.in", "r", stdin);
    freopen("julian.out", "w", stdout);
    m[0] = d[0] = 1;
    for (int i = 1; i < N; i++) {
        d[i] = d[i - 1] + 1;
        m[i] = m[i - 1];
        y[i] = y[i - 1];
        if (d[i] > calc(y[i], m[i])) {
            d[i] = 1;
            m[i]++;
        }
        if (m[i] > 12) {
            m[i] = 1;
            y[i]++;
        }
    }
    cin >> T;
    while (T--) {
        cin >> n;
        if (n > 2299160) {
            n -= 2159351;
            t = n / N * 400 + 1200;
            n %= N;
        } else {
            t = n / 1461 * 4 - 4712;
            n %= 1461;
        }
        if (t + y[n] > 0)
            cout << d[n] << " " << m[n] << " " << t + y[n] << "\n";
        else
            cout << d[n] << " " << m[n] << " " << 1 - t - y[n] << " BC\n";
    }

    return 0;
}