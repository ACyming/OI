#include <bits/stdc++.h>
using namespace std;
string s;
int book[100005];
int ans;
int main()
{
    cin >> s;
    bool blog = 1;
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] != s[i + 1])
            blog = 0;
    }
    if (blog)
        cout << 1, exit(0);
    for (int i = 0; i < s.size(); i++) {
        ans += s.size() - i - 1;
        book[s[i]]++;
    }
    int cnt = 0;
    for (char i = 'a'; i <= 'z'; i++) {
        if (book[i] > 1)
            cnt += book[i];
    }
    cout << ans - cnt;
    return 0;
}