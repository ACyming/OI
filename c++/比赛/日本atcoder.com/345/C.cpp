#include <bits/stdc++.h>
#define int long long
using namespace std;
string s;
int book[10005];
int ans;
bool blog = 0;
main()
{
    cin >> s;
    book[s[0]] = 1;
    for (int i = 1; i < s.size(); i++) {
        ans += i - book[s[i]];
        book[s[i]]++;

        if (book[s[i]] == 2 && !blog) {
            blog = 1;
        }
    }
    cout << ans + blog;
    return 0;
}
