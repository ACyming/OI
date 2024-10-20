#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int n, d, ans;
int a[N];

int main() {
    cin >> n >> d;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    for (int i = 1; i <= n; i++) {
        for (int j = i - 1; j >= 1; j--) {
            if (abs(a[j] - a[i]) <= d)
                ans++;
            else
                break;
        }
        for (int j = i + 1; j <= n; j++) {
            if (abs(a[j] - a[i]) <= d)
                ans++;
            else
                break;
        }
    }
    cout << ans / 2;
    return 0;
}