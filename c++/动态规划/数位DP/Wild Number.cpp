#include <bits/stdc++.h>
#define int long long
using namespace std;
string s;
int num, cnt, ans;
void dfs(int x, int y) {
    if (x == s.size() + 1) {
            if (y > num)
                ans++;
        return;
    }
    if (s[x - 1] == '?')
        for (int i = 0; i <= 9; i++)
            dfs(x + 1, y * 10 + i);
    else
        dfs(x + 1, y * 10 + s[x - 1] - '0');
}
main() {
    cin >> s >> num;
    dfs(1, 0);
    cout << ans;
    return 0;
}