#include <bits/stdc++.h>
using namespace std;
int n, m, cc;

int main() {
    cin >> n >> m;
    vector<vector<int>> c(m);
    for (int i = 0; i < n; ++i) {
        cin >> cc;
        cc--;
        c[cc].push_back(i + 1);
    }
    for (int i = 0; i < n; ++i) {
        cout << c[i % m].back() << endl;
        c[i % m].pop_back();
    }
    return 0;
}