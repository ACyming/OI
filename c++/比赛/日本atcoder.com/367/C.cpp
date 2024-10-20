#include <bits/stdc++.h>
using namespace std;
int n, k;
int r[20];
void dfs(int n, int k, vector<int>& ans, int x, int sum) {
    if (x == n + 1) {
        if (sum % k == 0) {
            for (int i = 1; i <= n; ++i) {
                if (i > 1)
                    cout << " ";
                cout << ans[i];
            }
            cout << endl;
        }
        return;
    }
    for (int i = 1; i <= r[x]; ++i) {
        ans[x] = i;
        dfs(n, k, ans, x + 1, sum + i);
    }
}

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> r[i];
    vector<int> ans(n + 10, 0);
    dfs(n, k, ans, 1, 0);
    return 0;
}