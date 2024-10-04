#include <bits/stdc++.h>
using namespace std;
int is[25001];
int a[120];
int T, n, ans = 0;
int main() {

	freopen("money.in", "r", stdin);
	freopen("money.out", "w", stdout);
    cin >> T;
    while (T--) {
        ans = 0;
        memset(is, 0, sizeof(is));
        memset(a, 0, sizeof(a));
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            is[a[i]] = 2;
        }
        sort(a + 1, a + 1 + n);
        for (int i = 1; i <= a[n]; i++) {
            if (is[i] > 0) {
                for (int j = 1; j <= n; j++)
                    if (i + a[j] <= a[n])
                        is[i + a[j]] = 1;
                    else
                        break;
            }
        }
        for (int i = 1; i <= a[n]; i++)
            if (is[i] == 2)
                ans++;
        printf("%d\n", ans);
    }
}
