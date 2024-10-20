#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int n, m, a[N], t[4 * N], dd[4 * N];
inline int read() {
    register int x = 0, f = 1;
    register char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
        x = x * 10 + ch - '0', ch = getchar();
    return x * f;
}
inline void write(register int x) {
    if (x < 0)
        putchar('-'), x = -x;
    if (x > 9)
        write(x / 10);
    putchar(x % 10 + '0');
    return;
}
inline void build(int x, int l, int r) {
    if (l == r) {
        t[x] = a[l];
        return;
    }
    register int mid = int((l + r) / 2);
    build(x * 2, l, mid);
    build(x * 2 + 1, mid + 1, r);
    t[x] = min(t[x * 2], t[x * 2 + 1]);
}
inline void down(int x, int l, int r, int i) {
    if (l != r) {
        dd[x * 2] += dd[x];
        dd[x * 2 + 1] += dd[x];
    }
    t[x] += dd[x];
    if (t[x] < 0) {
        cout << -1 << endl << i;
        exit(0);
    }
    dd[x] = 0;
}
inline void add(int x, int l, int r, int L, int R, int q, int i) {
    if (dd[x] != 0)
        down(x, l, r, i);
    if (r < L || l > R)
        return;
    if (L <= l && r <= R) {
        dd[x] += q;
        if (dd[x])
            down(x, l, r, i);
        return;
    }
    register int mid = ((l + r) / 2);
    add(x * 2, l, mid, L, R, q, i);
    add(x * 2 + 1, mid + 1, r, L, R, q, i);
    t[x] = min(t[x * 2], t[x * 2 + 1]);
}
int main() {
    n = read(), m = read();
    register int i, d, s, t;
    for (i = 1; i <= n; i++)
        a[i] = read();
    build(1, 1, n);
    for (i = 1; i <= m; i++) {
        d = read(), s = read(), t = read();
        add(1, 1, n, s, t, -d, i);
    }
    cout << 0;
    return 0;
}