#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a[120];

int cnt;
main()
{
#ifdef ONLINE_JUDGE
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
#endif
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        cnt += a[i];
    }
    int dp[cnt + 20]; // dp[i]��ʾȡ���ܺ�Ϊiʱ�����нⷨ
    memset(dp, 0, sizeof(dp));
    if (cnt % 2 != 0) {
        cout << 0;
        return 0;
    }
    for (int i = 1; i <= n; i++) {       // ö��ÿ����Ƭ
        for (int j = cnt; j >= 0; j--) { // ö�ٱ�����С
            if (j == 0) {
                dp[a[i]]++;
                continue;
            }
            dp[j + a[i]] = max(dp[j + a[i]], dp[j + a[i]] + dp[j]);
        }
    }
    cout << dp[cnt / 2] / 2;
    return 0;
}
