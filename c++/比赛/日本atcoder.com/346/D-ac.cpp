#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 1e9 + 1;
main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
        cin >> c[i];
    vector dp(n, vector(2, vector(2, INF)));
    dp[0][0][s[0] - '0'] = 0;
    dp[0][0][(s[0] - '0') ^ 1] = c[0];
    for (int i = 1; i < n; i++) {
        int j = s[i] - '0';
        for (int k = 0; k < 2; k++) {
            dp[i][0][k] = dp[i - 1][0][k ^ 1] + (j == k ? 0 : c[i]);
            dp[i][1][k] =
                min(dp[i - 1][0][k], dp[i - 1][1][k ^ 1]) + (j == k ? 0 : c[i]);
        }
    }
    cout << min(dp[n - 1][1][0], dp[n - 1][1][1]);
}