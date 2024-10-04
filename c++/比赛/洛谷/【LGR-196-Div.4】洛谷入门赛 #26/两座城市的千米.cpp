#include <bits/stdc++.h>
using namespace std;
int n, m, a, b;
int ans;
int main() {
    cin >> n >> m >> a >> b;
    while (m--) {
        int nn, c;
        bool flag = 0;
        cin >> nn;
        for (int i = 1; i <= nn; i++) {
            cin >> c;
            if (c == b && flag)
                ans++;
            if (a == c)
                flag = 1;
        }
    }
    cout << ans;
    return 0;
}