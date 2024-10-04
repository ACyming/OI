#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    cin >> s;
    int ss = s.find("|");
    int ee = s.find("|", ss + 1);
    for (int i = 0; i < s.size(); i++) {
        if (i >= ss && i <= ee)
            continue;
        cout << s[i];
    }
    return 0;
}