#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m;
int ans;
struct Node {
    int color;
    int num;
} a[100020];
int aa[100020][2], bb[100020][2], cc[100020][2], le[100020][2];
main()
{
#ifdef ONLINE_JUDGE
    freopen("sum.in", "r", stdin);
    freopen("sum.out", "w", stdout);
#endif
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i].num;
    for (int i = 1; i <= n; i++)
        cin >> a[i].color;
    for (int i = 1; i <= n; i++) {
        aa[a[i].color][i % 2] += i % 10007;
        bb[a[i].color][i % 2] += a[i].num % 10007;
        cc[a[i].color][i % 2] += a[i].num * i % 10007;
        le[a[i].color][i % 2]++;
    }
    for (int i = 1; i <= m; i++)
        for (int j = 0; j <= 1; j++)
            ans += aa[i][j] * bb[i][j] % 10007 + cc[i][j] * (le[i][j] - 2) % 10007;
    cout << ans % 10007;
    return 0;
}
