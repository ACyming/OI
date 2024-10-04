#include <bits/stdc++.h>
#define int long long
using namespace std;
int xx, yy, ans1[100005], ans2[100005], cnt1, cnt2, ans;
int sb(int x) {
    int sum = 0;
    while (x) {
        sum += (x % 10) * (x % 10);
        x /= 10;
    }
    return sum;
}
signed main() {
    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);
    scanf("%lld %lld", &xx, &yy);
    while (xx != 0 && yy != 0) {
        ans = INT_MAX;
        int bz1[100005], bz2[100005], x1 = xx, x2 = yy;
        memset(bz1, 0, sizeof(bz1));
        memset(bz2, 0, sizeof(bz2));
        cnt1 = 1, cnt2 = 1;
        ans1[cnt1] = xx;
        ans2[cnt2] = yy;
        while (1) {
            int x = sb(xx);
            if (!bz1[x]) {
                bz1[x] = 1;
                ans1[++cnt1] = x;
                xx = x;
            } else break;
        }
        while (1) {
            int x = sb(yy);
            if (!bz2[x]) {
                bz2[x] = 1;
                ans2[++cnt2] = x;
                yy = x;
            } else break;
        }
        for (int i = 1; i <= cnt1; i++) {
            for (int j = 1; j <= cnt2; j++) {
                if (ans1[i] == ans2[j]) {
                    ans = min(ans, i + j);
                }
            }
        }
        printf("%lld %lld ", x1, x2);
        if (ans == INT_MAX) {
            puts("0");
        } else {
            printf("%lld\n", ans);
        }
        scanf("%lld %lld", &xx, &yy);
    }
    return 0;
}