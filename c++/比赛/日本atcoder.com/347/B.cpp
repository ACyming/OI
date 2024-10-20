#include <bits/stdc++.h>
#define int long long
using namespace std;
string s;
int ans;
map<string, bool> mp;
main() {
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        for (int j = i; j < s.size(); j++) {
            string ss = "";
            for (int k = i; k <= j; k++)
                ss += s[k];
            // cout << ss << endl;
            if (mp[ss] == 0) {
                ans++;
                mp[ss] = 1;
            }
        }
    }
    cout << ans;
    return 0;
}