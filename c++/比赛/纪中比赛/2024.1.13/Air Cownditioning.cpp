#include <bits/stdc++.h>
using namespace std;
int n, a[100200];
int cnt;
int main()
{

    // freopen("b.in", "r", stdin);
    // freopen("b.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int t;
    for (int i = 1; i <= n; i++) {
        cin >> t;
        a[i] -= t;
    }
    for (int i = 1; i <= n + 1; i++) {
        cnt = cnt + abs(a[i] - a[i - 1]);
    }
    cout << cnt / 2;
    return 0;
}
