#include <bits/stdc++.h>
using namespace std;
int n, m, k, t;
stack<int> zhan[120][120];
int num[120][120];
int main() {
    cin >> n >> m >> k >> t;

    while (t--) {
        int a, x, y;
        cin >> a >> x >> y;
        if (num[x][y] < k) {
            zhan[x][y].push(a);
            num[x][y]++;
            cout << -1 << endl;
        } else {
            int cnt = 0, minn = INT_MAX, id;
            stack<int> tmp;
            while (!zhan[x][y].empty()) {
                tmp.push(zhan[x][y].top());
                cnt++;
                if (minn > zhan[x][y].top()) {
                    minn = zhan[x][y].top();
                    id = cnt;
                }
                zhan[x][y].pop();
            }
            cout << minn << " ";
            bool flag = 0;
            cnt = 0;
            while (!tmp.empty()) {
                if (flag)
                    cnt++;
                if (tmp.size() != id)
                    zhan[x][y].push(tmp.top()), tmp.pop();
                else {
                    flag = 1;
                    tmp.pop();
                }
            }
            zhan[x][y].push(a);
            cout << cnt << endl;
        }
    }
    return 0;
}