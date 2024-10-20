#include <bits/stdc++.h>
using namespace std;
int a[120], dp[120], t, n;
int ans, cnt;

int main()
{
    while (cin >> a[++n])
        ;
    while (cnt != n) {
        for (int i = n; i >= 1; i--)
            for (int j = i + 1; j <= n; j++) {
                if (a[i] >= a[j]) {
                    cnt++;
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        for (int i = 1; i <= n; i++) {
            t = max(t, dp[i]);
        }
        ans++;
    }

    cout << t << "\n"
         << ans;
}
