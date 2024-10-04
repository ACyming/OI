#include <bits/stdc++.h>
using namespace std;
int n;
int a[999999], dp[999999];
int cnt = 1, ans;
int main()
{
    //	freopen("seq.in","r",stdin);
    //	freopen("seq.out","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        dp[i] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            if (a[j] <= a[i])
                dp[i] = max(dp[j] + 1, dp[i]);
        }
        ans = max(dp[i], ans);
    }
    cout << ans;
    return 0;
}
