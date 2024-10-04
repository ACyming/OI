#include <bits/stdc++.h>
using namespace std;
string s;
int nxt[(int)1e6 + 10];
int f[(int)1e6 + 10][30];
long long ans;
main() {
    cin >> s;
    int j = 0;
    for (int i = 1; i < s.size(); i++) {
        while (j && s[i] != s[j])
            j = nxt[j - 1];
        if (s[i] == s[j])
            j++;
        nxt[i] = j;
    }
    for (int i = 1; i < s.size(); i++) {
        for (int c = 1; c <= 26; c++) {
            f[i][c] = (c + 'a' - 1 == s[nxt[i - 1]] ? nxt[i - 1] + 1 : f[nxt[i - 1]][c]);
            ans += f[i][c];
        }
    }
    cout << ans;
    return 0;
}