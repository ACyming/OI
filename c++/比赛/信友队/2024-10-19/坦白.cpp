#include <bits/stdc++.h>
using namespace std;
const int N = 3e5 + 10;
int t, f[N];
string s;
int main() {
    cin >> t;
    while (t--) {
        cin >> s;
        for (int i = 0; i <= s.size(); i++) {
            int cnt = i;
            memset(f, 0, sizeof(f));
            for (int j = 0; j < s.size(); j++) {
                if (cnt > 0) {
                    f[j] = max(f[j - 1] + (s[j] == '+' ? 1 : -1), f[i - 1] ^ 1);
                    cnt--;
                } else {
                    f[j] = f[j - 1] + (s[j] == '+' ? 1 : -1);
                }
            }
            cout << f[s.size() - 1] << " ";
        }
        cout << endl;
    }
    return 0;
}