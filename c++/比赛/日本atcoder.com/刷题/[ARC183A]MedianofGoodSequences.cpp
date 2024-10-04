#include <bits/stdc++.h>
using namespace std;
int n, k;
int main() {
    cin >> n >> k;
    vector<int> ans(n * k + 1);
    if (n == 1) {
        while (k--)
            cout << 1 << " ";
        return 0;
    }
    if (n % 2 == 1) {
        ans[1] = ceil(n * 1.0 / 2);
        ans[2] = n / 2;
        int now = 3;
        for (int i = n; i >= 1; i--) {
            if (i != ans[1] && i != ans[2]) {
                ans[now] = i;
                now++;
            }
        }
        if (k != 1)
            ans.insert(ans.begin() + 2 + ceil(n * 1.0 / 2), ans[2]);
        for (int i = 1; i <= n + 1; i++) {
            if (i != 2) {
                if (i != ceil(n * 1.0 / 2) + 2) {
                    for (int j = 1; j <= k - 1; j++)
                        if (ans[i])
                            cout << ans[i] << " ";
                } else {
                    for (int j = 1; j <= k - 2; j++)
                        if (ans[i])
                            cout << ans[i] << " ";
                }
            }
            if (ans[i])
                cout << ans[i] << " ";
        }
    } else {
        ans[1] = n / 2;
        int now = 2;
        for (int i = n; i >= 1; i--) {
            if (i != ans[1]) {
                ans[now] = i;
                now++;
            }
        }
        if (k != 1)
            ans.insert(ans.begin() + 2 + n * 1.0 / 2, ans[1]);
        for (int i = 1; i <= n + 1; i++) {
            if (i != 1) {
                if (i != n * 1.0 / 2 + 2) {
                    for (int j = 1; j <= k - 1; j++)
                        if (ans[i])
                            cout << ans[i] << " ";
                } else
                    for (int j = 1; j <= k - 2; j++)
                        if (ans[i])
                            cout << ans[i] << " ";
            }
            if (ans[i])
                cout << ans[i] << " ";
        }
    }
    return 0;
}