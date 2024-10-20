#include <bits/stdc++.h>
using namespace std;

inline unsigned read()
{
    unsigned x = 0;
    char c = getchar();
    while (c < '0' || c > '9') {
        c = getchar();
    }
    while (c >= '0' && c <= '9') {
        x = x * 10 + (c - '0');
        c = getchar();
    }
    return x;
}
main()
{
    register int n, q;
    register int c[(long long)1e7], t[(long long)1e7], i, j;
    memset(c, 0, sizeof(c));
    memset(t, 0, sizeof(t));
    n = read();
    q = read();
    for (i = 1; i <= n; i++)
        c[i] = read();
    for (i = 1; i <= n; i++)
        t[i] = read();
    for (i = 1; i <= q; i++) {
        int v = 0, s = 0, cnt = 0, blog = 0;
        v = read();
        s = read();
        for (j = 1; j <= n; j++) {
            if (t[j] + s < c[j])
                cnt++;
            if (cnt >= v) {
                printf("YES\n");
                blog = 1;
                break;
            }
        }
        if (blog == 0) {
            if (cnt >= v) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }
    return 0;
}