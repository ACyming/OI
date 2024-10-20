#include <bits/stdc++.h>
#define int long long
#define inf 2 * (int)1e5 + 10
using namespace std;
int h, w, m;
int nx, ny;
int a[inf], b[inf], c[inf];
int bz1[inf], bz2[inf];
int color[2 * (int)1e5 + 10];
main() {
    cin >> h >> w >> m;
    for (int i = 1; i <= m; i++)
        cin >> a[i] >> b[i] >> c[i];
    for (int i = m; i >= 1; i--) {
        if (a[i] == 1 && !bz1[b[i]]) {
            nx++;
            color[c[i]] += w - ny;
            bz1[b[i]] = 1;
        }
        if (a[i] == 2 && !bz2[b[i]]) {
            ny++;
            color[c[i]] += h - nx;
            bz2[b[i]] = 1;
        }
    }
    int ans = 0;
    for (int i = 1; i <= 2 * (int)1e5 + 10; i++) {
        if (color[i] > 0)
            ans++;
    }
    if ((w - ny) * (h - nx) + color[0] > 0)
        ans++;
    cout << ans;
    if ((w - ny) * (h - nx) + color[0] > 0)
        cout << endl << 0 << " " << (w - ny) * (h - nx) + color[0];
    for (int i = 1; i <= 2 * (int)1e5 + 10; i++) {
        if (color[i] > 0)
            cout << "\n" << i << " " << color[i];
    }
    return 0;
}