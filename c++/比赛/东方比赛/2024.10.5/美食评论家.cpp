#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 20;
int sco[N], pri[N], n, k, p;
int cnt[60][N], last;
int ans;
int main() {
    cin >> n >> k >> p;
    for (int i = 1; i <= n; i++) {
        cin >> sco[i] >> pri[i];
        cnt[sco[i]][i] = 1;
        for (int j = 0; j < k; j++) 
            cnt[j][i] += cnt[j][i - 1];
        if (pri[i] <= p) last = i;
        if (i != last) ans += cnt[sco[i]][last];
        else ans += cnt[sco[i]][last - 1];
    }
    cout << ans; 
    return 0;
}
