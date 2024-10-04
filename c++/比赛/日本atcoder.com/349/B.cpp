#include <bits/stdc++.h>
using namespace std;
string s;
int cnt;
int b[300000],w[3000000];
int main()
{
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        b[int(s[i])]++;
    for(int i='a';i<='z';i++){
        w[b[i]]++;
    }
    for (int i = 1; i <= 999999; i++)
    {
        if (w[i] == 2 || w[i] == 0)
        {
            continue;
        }
        else
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}