#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int turn(char a, char b)
{
    if (a == b)
        return 0;
    else if (a == 'E' && b == 'N' || a == 'N' && b == 'W' || a == 'W' && b == 'S' || a == 'S' && b == 'E')
        return -90;
    else if (a == 'E' && b == 'S' || a == 'S' && b == 'W' || a == 'W' && b == 'N' || a == 'N' && b == 'E')
        return 90;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        int fx = 0;
        for (int i = 0; i < s.size() - 1; i++)
            fx += turn(s[i], s[i + 1]);
        fx += turn(s[s.size() - 1], s[0]);
        if (fx > 0)
            cout << "CW" << endl;
        else
            cout << "CCW" << endl;
    }
    return 0;
}