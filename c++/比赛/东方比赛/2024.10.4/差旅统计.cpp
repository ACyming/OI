#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 10;
int n, m, ans;
int p[N], cnt[N];
main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        cin >> p[i];
    int x, y;
    for (int i = 1; i < m; i++) {
        x = min(p[i], p[i + 1]);
        y = max(p[i], p[i + 1]);
        cnt[x]++;
        cnt[y]--;
    }
    for (int i = 1; i <= n; i++)
        cnt[i] += cnt[i - 1];
    for (int i = 1; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        ans += min(a * cnt[i], b * cnt[i] + c);
    }
    cout << ans;
    return 0;
}