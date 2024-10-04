#include <bits/stdc++.h>
#define int long long
using namespace std;
int sum1, sum2;
main() {
    int n;
    cin >> n;
    int a;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        sum1 += a;
    }
    for (int i = 1; i <= n; i++) {
        cin >> a;
        sum2 += a;
    }
    cout << (long long)ceil((sum1 + sum2) / 2.0);
    return 0;
}