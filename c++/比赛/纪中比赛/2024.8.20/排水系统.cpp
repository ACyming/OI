#include <bits/stdc++.h>
const int N = 1e5 + 10;
#define int __int128
using namespace std;
int n, m;
vector<int> t[N];
int read() {
    int x = 0;
    char c = getchar();
    while (c < 48 || c > 57)
        c = getchar();
    while (c > 47 && c < 58)
        x = (x << 1) + (x << 3) + c - 48, c = getchar();
    return x;
}

void write(int x) {
    if (x > 9)
        write(x / 10);
    putchar(x % 10 + 48);
}
struct fra {
    int m, s;
    void cle() { m = 0, s = 0; }
} ans[N], a[N];
int gcd(int m, int n) {
    while (n != 0) {
        int t = m % n;
        m = n, n = t;
    }
    return m;
}
fra calc(fra a, fra b) {
    if (a.m == 0)
        return b;
    fra ans;
    int GCD = a.m * b.m / gcd(a.m, b.m);
    ans.s = (b.s * (GCD / b.m) + a.s * (GCD / a.m)), ans.m = GCD;
    int cc = gcd(ans.s, ans.m);
    ans.s /= cc, ans.m /= cc;  // 这里再化简
    return ans;
}
void dfs(int x) {
    if (!t[x].size()) {
        ans[x] = calc(ans[x], a[x]);
        a[x].m = 1, a[x].s = 0;
        return;
    }
    fra tmp = a[x];
    tmp.m *= t[x].size();
    for (int i = 0; i < t[x].size(); i++) {
        a[t[x][i]] = calc(a[t[x][i]], tmp);
        dfs(t[x][i]);
    }
    a[x].cle();
}
main() {

	freopen("water.in", "r", stdin);
	freopen("water.out", "w", stdout);
    n = read(), m = read();
    for (int i = 1; i <= n; i++)
        ans[i].cle();
    for (int i = 1; i <= n; i++) {
        int x, y;
        x = read();
        for (int j = 1; j <= x; j++) {
            y = read();
            t[i].push_back(y);
        }
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++)
            a[j].cle();
        a[i].s = a[i].m = 1;
        dfs(i);
    }
    for (int i = 1; i <= n; i++) {
        if (t[i].size() == 0) {
            write(ans[i].s);
            cout << " ";
            write(ans[i].m);
            cout << endl;
        }
    }
    return 0;
}