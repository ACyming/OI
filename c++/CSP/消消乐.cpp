#include <bits/stdc++.h>
using namespace std;
const int N = 2e6 + 10;
int n, f[N], ans;
string s;
stack<char> zhan;
int main() {
    cin >> n >> s;
    for (int l = 0; l < n; l++) {
        while (zhan.size())
            zhan.pop();
        for (int i = l; i <= n; i++) {
            if (!zhan.empty() && zhan.top() == s[i])
                zhan.pop();
            else
                zhan.push(s[i]);
            if (zhan.empty())
                ans++;
        }
    }
    cout << ans;
    return 0;
}