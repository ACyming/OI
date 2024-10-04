#include <bits/stdc++.h>
using namespace std;
int n, V;
int vi, wi, si;
int k;
int w[100000], v[100000],dp[100000];
int main()
{
    cin >> n >> V;
    for (int i = 1; i <= n; i++) {
        cin >> vi >> wi >> si;
        for (int j = 1; j <= si; j *= 2) {
            k++;
            w[k] = wi * j;
            v[k] = vi * j;
            si -= j;
        }
        if (!si) {
            w[++k] = si * wi;
            v[k] = si * vi;
        }
    }
    for (int i = 1; i <= n; i++)
        for (int j = k; j >= v[i]; j--)
            dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
    cout<<dp[V];
    return 0;
}