#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0 && (n - i) % 3 == 0) {
            cout << i / 2 << " " << (n - i) / 3 << endl;
        }
    }
    return 0;
}
