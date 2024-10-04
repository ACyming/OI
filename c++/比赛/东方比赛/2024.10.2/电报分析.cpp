#include <bits/stdc++.h>
using namespace std;
int t;
int f[100020], a[100020];
int main() {
    cin >> t;
    while (t--) {
        memset(f, 0, sizeof f);
        memset(a, 0, sizeof a);
        int n, x, y;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            f[abs(a[i] - a[i - 1])]++;
        }
        bool flag = 0;
        for (int i = 1; i < n; i++)
            if (!f[i]) {
                cout << "N" << endl, flag = 1;
                break;
            }
        if (!flag)
            cout << "Y" << endl;
    }
    return 0;
}