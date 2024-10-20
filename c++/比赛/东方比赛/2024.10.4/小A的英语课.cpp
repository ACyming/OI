#include <bits/stdc++.h>
using namespace std;
int n;
char s[5][7];
bool vis[5], pd = false;
void dfs(string x, int y) {
    if (pd || y == x.size()) {
        pd = true;
        return;
    }
    for (int i = 0; i < 4; i++)
        if (!vis[i])
            for (int j = 0; j < 6; j++)
                if (s[i][j] == x[y]) {
                    vis[i] = true;
                    dfs(x, y + 1);
                    vis[i] = false;
                }
}
int main() {
    cin >> n;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 6; j++)
            cin >> s[i][j];
    while (n--) {
        string x;
        cin >> x;
        fill(vis, vis + 4, false), pd = false;
        dfs(x, 0);
        if (pd) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}