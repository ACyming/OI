#include <bits/stdc++.h>
using namespace std;
int n, cnt = 1;
int ans[105][105];
int main()
{
    freopen("a.in", "r", stdin);
    freopen("a.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++) { // 列
        if (i % 2 == 1) {
            for (int j = 1; j <= n; j++) {
                ans[i][j] = cnt;
                cnt++;
            }
        } else {
            for (int j = n; j >= 1; j--) {
                ans[i][j] = cnt;
                cnt++;
            }
        }
    }
    for (int i = 1; i <= n; i++) { // 列
        for (int j = 1; j <= n; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}