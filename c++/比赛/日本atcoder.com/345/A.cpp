#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    cin >> s;
    int a = 0, b = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '<')
            a++;
        if (s[i] == '>')
            b++;
    }
    if (a == 1 && b == 1)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}