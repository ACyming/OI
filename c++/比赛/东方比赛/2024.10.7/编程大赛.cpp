
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n, l;
int a[N];
bool check(int x) {
    int c1 = 0, c2 = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] >= x)
            c1++;
        else if (a[i] == x - 1)
            c2++;
    }
    if (c1 >= x)
        return 1;
    if (x - c1 <= l && x - c1 <= c2)
        return 1;
    return 0;
}
int main() {
    cin >> n >> l;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int l = 1, r = n;
    while (l <= r) {
        int mid = l + r >> 1;
        if (check(mid))
            l = mid + 1;
        else
            r = mid - 1;
    }
    cout << l - 1;
    return 0;
}
