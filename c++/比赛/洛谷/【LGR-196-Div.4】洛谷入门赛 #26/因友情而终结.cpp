#include <bits/stdc++.h>
using namespace std;
string s;
int ans;
int main() {
    cin >> s;
    int find = s.find("friend"), ff;
    while (find != -1) {
        ans++;
        ff = s.find("friend", find + 1);
        if (ff != -1) {
            if (ff - find <= 8)
                find = s.find("friend", ff + 1);
            else
                find = ff;
        } else
            find = ff;
    }
    cout << ans;
    return 0;
}
// frien dorf riend