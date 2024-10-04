#include <bits/stdc++.h>
using namespace std;
string s, ans;
int main() {
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ']')
            break;
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            ans = ans + char(s[i] + 32);
        }
    }
    cout << "/" << ans;
    return 0;
}