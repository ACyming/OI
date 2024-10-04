#include <bits/stdc++.h>
using namespace std;
int t, n, k;
int mp[22][22], yz[22][22], cmp[22][22];
bool flag = 0;
bool check() {
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (cmp[i][j] != mp[i][j])
                return 0;
    return 1;
}
void oo(int x) {
    int aa[22][22];
    for (int i = 1; i <= k; i++)
        for (int j = 1; j <= k; j++)
            aa[i][j] = yz[i][j];
    for (int i = 1; i <= k; i++)
        for (int j = 1; j <= k; j++)
            aa[i][j] = yz[i][j];
}
void dfs(int x, int y) {
    if (flag)
        return;
    if (x == n && y == n) {
        if (check())
            flag = 1;
        return;
    }
    for (int i = 1; i <= 4; i++) {
        oo(i);
        for (int i = 1; i <= k; i++)
            for (int j = 1; j <= k; j++)
                cmp[x + i][y + j] = yz[i][j];
    }
}
int main() {
    cin >> t >> n >> k;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                cin >> mp[i][j];
        cin >> k;
        for (int i = 1; i <= k; i++)
            for (int j = 1; j <= k; j++)
                cin >> yz[i][j];
        flag = 0;
        memset(cmp, 0, sizeof cmp);
        dfs(0, 0);
        if (flag)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}