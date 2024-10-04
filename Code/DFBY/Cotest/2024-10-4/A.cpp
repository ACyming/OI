// 小A的英语课
#include <bits/stdc++.h>
using namespace std;
int n;
char s[10][10];
bool vis[10];
bool check(char c) {
    for (int i = 1; i <= 4; i++) {
        bool flag = 0;
        if (vis[i])
            continue;
        for (int j = 1; j <= 6; j++) {
            if (s[i][j] == c) {
                vis[i] = 1;
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    cin >> n;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 6; j++) {
            cin >> s[i][j];
        }
    }
    while (n--) {
        memset(vis, 0, sizeof(vis));
        bool p = 1;
        string ss;
        cin >> ss;
        for (int i = 0; i < ss.size(); i++) {
            if (!check(ss[i])) {
                cout << "NO" << endl;
                p = 0;
                break;
            }
        }
        if (p)
            cout << "YES" << endl;
    }

    return 0;
}
