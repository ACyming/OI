#include <bits/stdc++.h>
using namespace std;
const long long N = 200020;
long long n, m, s, l[N], r[N], w[N], v[N], sum;
long long qw[N], qv[N];
inline bool check(long long W) {
    sum = 0;
    for (long long i = 1; i <= n; i++)
        qw[i] = qv[i] = 0;
    for (long long i = 1; i <= n; i++) {
        if (w[i] >= W)
            qw[i] = qw[i - 1] + 1, qv[i] = qv[i - 1] + v[i];
        else
            qw[i] = qw[i - 1], qv[i] = qv[i - 1];
    }
    long long y = 0;
    for (long long i = 1; i <= m; i++)
        y += (qw[r[i]] - qw[l[i] - 1]) * (qv[r[i]] - qv[l[i] - 1]);
    sum = abs(s - y);
    if (y > s)
        return 1;
    return 0;
}
inline long long read() {
    long long x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
        x = x * 10 + ch - '0', ch = getchar();
    return x * f;
}
void write(long long x) {
    if (x < 0)
        putchar('-'), x = -x;
    if (x > 9)
        write(x / 10);
    putchar(x % 10 + '0');
    return;
}
main() {
    register long long ans = LONG_LONG_MAX;
    n = read();
    m = read();
    s = read();
    for (long long i = 1; i <= n; i++)
        w[i] = read(), v[i] = read();
    for (long long i = 1; i <= m; i++)
        l[i] = read(), r[i] = read();
    long long L = 0, R = 1e6, mid;
    while (L <= R) {
        mid = (L + R) >> 1;
        if (check(mid))
            L = mid + 1;
        else
            R = mid - 1;
        ans = min(ans, sum);
    }
    write(ans);
    return 0;
}
