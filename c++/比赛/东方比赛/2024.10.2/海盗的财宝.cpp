#include <bits/stdc++.h>
using namespace std;
const int N = 520;
int n, m, x, y;
int a[N][N], s[N][N];
bool check(int mid) {
    int cnt_x = 0, cnt_y = 0, xx = 0, yy = 0;
    for (int i = 1; i <= n; i++) {
        yy = cnt_y = 0;
        for (int j = 1; j <= m; j++) {
            if (s[i][j] - s[i][yy] - s[xx][j] + s[xx][yy] >= mid) {
                cnt_y++;
                yy = j;
            }
        }
        if (cnt_y >= y) {
            cnt_x++;
            xx = i;
        }
    }
    return cnt_x >= x;
}
int main() {
    cin >> n >> m >> x >> y;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + a[i][j];
        }
    int l = 1, r = s[n][m];
    while (l <= r) {
        int mid = l + r >> 1;
        if (check(mid))
            l = mid + 1;
        else
            r = mid - 1;
    }
    cout << l - 1;
    return 0;
}