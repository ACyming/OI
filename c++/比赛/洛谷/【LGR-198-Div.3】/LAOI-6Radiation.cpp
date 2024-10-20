#include <bits/stdc++.h>
using namespace std;
const int N = 2e3 + 10;
int t;
char mp[N][N];
int main() {
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                mp[i][j] = '.';
        int x = 1, y = 1;
        while (k != 0) {
            if (x > n)
                x = 1;
            if (y > m)
                y = 1;
            if (mp[x][y] == '.') {
                mp[x][y] = 'S';
                x++;
                y++;
                k--;
            } else {
                y++;
            }
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++)
                cout << mp[i][j];
            cout << endl;
        }
    }
    return 0;
}