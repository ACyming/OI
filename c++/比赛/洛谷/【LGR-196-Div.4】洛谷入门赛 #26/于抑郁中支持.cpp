#include <bits/stdc++.h>
using namespace std;
string a[100005];
int bz[100005];
int main() {
    int n, t;
    cin >> n >> t;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        int tmp = 0;
        for (int j = a[i].size() - t; j < a[i].size(); j++)
            tmp = tmp * 10 + a[i][j] - '0';
        if (a[i].size() < t) 
            for (int j = 0; j < a[i].size(); j++) 
                tmp = tmp * 10 + a[i][j] - '0';
        bz[tmp]++;
    }
    int ans = 0;
    for (int i = 0; i < 100005; i++) {
        if (bz[i] > 0) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}