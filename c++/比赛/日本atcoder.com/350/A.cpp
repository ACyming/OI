#include <bits/stdc++.h>
#define int long long
using namespace std;
string s;
int sss;
main()
{
    cin >> s;
    for (int i = 3; i <= 5; i++)
    {
        sss *= 10;
        sss += s[i] - '0';
    }
    if ((s[0] == 'A' && s[1] == 'B' && s[2] == 'C') && (sss >= 1 && sss <= 349)  && sss != 316)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}