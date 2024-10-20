#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long
int n, k, ans[120], cnt;
main() {
	freopen("code.in", "r", stdin);
	freopen("code.out", "w", stdout);
    cin >> n >> k;
    int a = (k / 2) ^ k;
    while (a) {
        ans[++cnt] = a % 2;
        a /= 2;
    }
    for (int i = n; i >= 1; i--)
        cout << ans[i];
    return 0;
}