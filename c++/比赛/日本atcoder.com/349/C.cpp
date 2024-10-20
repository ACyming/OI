#include <bits/stdc++.h>
using namespace std;
string s, t;
int cnt = 0;
int b[98766544], d[98766544];
int j = 0;
int main()
{
    cin >> s >> t;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t[j] + 32)
        {
            cnt++;
            j++;
            if (cnt >= 3)
            {
                cout << "Yes";
                return 0;
            }
        }
    }
    if (cnt == 2 && t[2] == 'X')
    {
        cout << "Yes", exit(0);
    }
    cout << "No";
    return 0;
}