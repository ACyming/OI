#include <bits/stdc++.h>
using namespace std;
int n, a[1000], m;
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++) {
        if (a[i] % m == 0)
            cout << a[i] / m << " ";
    }
    return 0;
}