#include <bits/stdc++.h>
using namespace std;
const int N = 100020;
int n;
struct gg {
    int x;
    int y;
} a[N];
bool cmp(gg xx, gg yy) {
    return xx.y < yy.y;
}
priority_queue<int, vector<int>, greater<int>> q;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i].x >> a[i].y;
    sort(a + 1, a + n + 1, cmp);
    int time = 0, ans = 0;
    for (int i = 1; i <= n; i++) {
        if (time + 1 <= a[i].y) {
            ans += a[i].x;
            q.push(a[i].x);
            time++;
        } else {
            int xx = q.top();
            if (xx < a[i].x) {
                q.pop();
                ans += a[i].x - xx;
                q.push(a[i].x);
            }
        }
    }
    cout << ans << endl;
    return 0;
}