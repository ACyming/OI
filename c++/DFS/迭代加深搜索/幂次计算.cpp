#include <bits/stdc++.h>
using namespace std;
int n, maxd;
int a[1020];
bool dfs(int x, int step) {
    if (step > maxd)
        return 0;
    if (x << (maxd - step) < n)
        return 0;
    if (x == n)
        return 1;
    a[step] = x;
    for (int i = 0; i <= step; i++) {
        if (dfs(x + a[i], step + 1))
            return 1;
        if (dfs(abs(x - a[i]), step + 1))
            return 1;
    }
    return 0;
}
int main() {
    while ((cin >> n) && n != 0) {
        memset(a, 0, sizeof a);
        maxd = 0;
        while (!dfs(1, 0)) {
            maxd++;
            memset(a, 0, sizeof a);
        }
        cout << maxd << endl;
    }
    return 0;
}