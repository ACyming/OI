#include <bits/stdc++.h>
using namespace std;
string s;
bool bz[11000];
int main()
{
    freopen("un.in", "r", stdin);
    freopen("un.out", "w", stdout);
    cin >> s;
    bz['A'] = bz['C'] = bz['M'] = bz['B'] = bz['R'] = bz['I'] = bz['D'] = bz['G'] = bz['E'] = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (!bz[s[i]])
            cout << s[i];
    }
    return 0;
}