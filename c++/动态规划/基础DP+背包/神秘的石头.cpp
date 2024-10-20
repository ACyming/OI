
#include <bits/stdc++.h>
using namespace std;
int a[10], w[10] = {0, 1, 2, 5, 10};
int dp[90005], ans;
int main()
{
#ifdef ONLINE_JUDGE
    freopen("stone.in", "r", stdin);
    freopen("stone.out", "w", stdout);
#endif
    for (int i = 1; i <= 4; i++)
        cin >> a[i];
    dp[0] = 1;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= a[i]; j++) {
            for (int k = 9005; k >= 0; k--) {
                if (dp[k] && k + w[i] <= 9005) {
                    dp[abs(k + w[i])] = 1;
                    dp[abs(k - w[i])] = 1;
                }
            }
        }
    }
    for (int i = 1; i <= 9005; i++) {
        if (dp[i])
            ans++;
    }
    printf("%d", ans);
    return 0;
}
// 暴力  50
/*#include <bits/stdc++.h>
using namespace std;
// 1 2 5 10
bool bz[10000];
int ans;
void dfs(int a, int b, int c, int d, int num)
{

    // if (a == 0 && b == 0 && c == 0 && d == 0)
    //     return;
    bz[num] = 1;
    // cout << a << " " << b << " " << c << " " << d << " " << num << endl;
    ans++;
    for (int i = 1; i <= a; i++) {
        if (num + i > 0 && !bz[num + i])
            dfs(a - i, b, c, d, num + i);

        else if (num - i > 0 && !bz[num - i])
            dfs(a - i, b, c, d, num - i);
    }

    for (int i = 1; i <= b; i++) {
        if (num + i * 2 > 0 && !bz[num + i * 2])
            dfs(a, b - i, c, d, num + i * 2);

        else if (num - i * 2 > 0 && !bz[num - i * 2])
            dfs(a, b - i, c, d, num - i * 2);
    }

    for (int i = 1; i <= c; i++) {
        if (num + i * 5 > 0 && !bz[num + i * 5])
            dfs(a, b, c - i, d, num + i * 5);

        else if (num - i * 5 > 0 && !bz[num - i * 5])
            dfs(a, b, c - i, d, num - i * 5);
    }
    for (int i = 1; i <= d; i++) {
        if (num + i * 10 > 0 && !bz[num + i * 10])
            dfs(a, b, c, d - i, num + i * 10);

        else if (num - i * 10 > 0 && !bz[num - i * 10])
            dfs(a, b, c, d - i, num - i * 10);
    }
}
int main()
{
#ifdef ONLINE_JUDGE
    freopen("stone.in", "r", stdin);
    freopen("stone.out", "w", stdout);
#endif
    register int n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;
    dfs(n1, n2, n3, n4, 0);
        cout << ans - 1;
    return 0;
}*/