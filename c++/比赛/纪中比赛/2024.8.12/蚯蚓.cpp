#include <bits/stdc++.h>
using namespace std;
const int N = 8e6, Inf = 0x3f3f3f3f;
int n, m, Q, u, v, ti;
int q[4][N], h[4], t[4];
inline int read() {
    char c;
    do {
        c = getchar();
    } while (c < '0' || c > '9');
    int sum = 0;
    do {
        sum = sum * 10 + c - 48;
        c = getchar();
    } while (c >= '0' && c <= '9');
    return sum;
}
inline void solve() {
    register int l = 0;
    for (int i = 1; i <= m; i++) {
        int num = -1, maxx = -Inf;
        for (int j = 1; j <= 3; j++)
            if (h[j] <= t[j] && q[j][h[j]] > maxx)
                num = j, maxx = q[j][h[j]];
        h[num]++;
        maxx += l;
        l += Q;
        int x = (int)((long long)maxx * u / v), y = maxx - x;
        t[2]++;
        q[2][t[2]] = x - l;
        t[3]++;
        q[3][t[3]] = y - l;
        if (i % ti == 0)
            printf("%d ", maxx);
    }
    printf("\n");
    for (int i = 1; i <= m + n; i++) {
        int num = -1, maxx = -Inf;
        for (int j = 1; j <= 3; j++)
            if (h[j] <= t[j] && q[j][h[j]] > maxx)
                num = j, maxx = q[j][h[j]];
        h[num]++;
        if (i % ti == 0)
            printf("%d ", maxx + l);
    }
}

int main() {

	freopen("earthworm.in", "r", stdin);
	freopen("earthworm.out", "w", stdout);
    n = read(), m = read(), Q = read(), u = read(), v = read(), ti = read();
    for (int i = 1; i <= n; i++)
        q[1][i] = read();
    sort(q[1] + 1, q[1] + n + 1, greater<int>());
    h[1] = 1;
    t[1] = n;
    h[2] = h[3] = 1;
    t[2] = t[3] = 0;
    solve();
    return 0;
}