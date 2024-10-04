#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MOD = 1e9 + 7;
main() {
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; ++i)
        cin >> x[i] >> y[i];
    int x_min = *min_element(x.begin(), x.end());
    int x_max = *max_element(x.begin(), x.end());
    int y_min = *min_element(y.begin(), y.end());
    int y_max = *max_element(y.begin(), y.end());
    cout << (abs(x_min-x1) + 1) % MOD *  (abs(x_max-x2) + 1) % MOD * (abs(y_min-y2) + 1) % MOD *  (abs(y_max-y1) + 1) % MOD<< endl;

    return 0;
}