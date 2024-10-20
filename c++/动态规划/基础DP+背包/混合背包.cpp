#include <bits/stdc++.h>
using namespace std;
#define M (int)1e4 + 10
#define N 2200
int k;
int dp[M], w[M], v[M], s[M];
int main()
{
    int n, m;
    cin >> n >> m;
    int vi, wi, si;
    for (int i = 1; i <= n; ++i) {
        cin >> vi >> wi >> si;
        if (si > 0) {
            for (int j = 1; j <= si; j <<= 1) {
                k++;
                w[k] = wi * j;
                v[k] = vi * j;
                s[k] = -1;
                si -= j;
            }
            if (!si) {
                w[++k] = si * wi;
                v[k] = si * vi;
                s[k] = -1;
            }
        } else {
            w[++k] = wi;
            v[k] = vi;
            s[k] = si;
        }
    }
    for (int i = 1; i <= n; ++i) {
        if (s[i] == -1)
            for (int j = m; j >= v[i]; j--)
                dp[j] = max(dp[j], dp[j - v[i] + w[i]]);
        else
            for (int j = v[i]; j <= m; j++)
                dp[j] = max(dp[j], dp[j - v[i] + w[i]]);
    }
    cout << dp[m];
    return 0;
}