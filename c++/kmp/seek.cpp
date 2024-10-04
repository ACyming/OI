#include <bits/stdc++.h>
using namespace std;
const int N = 4 * 1e5 + 10;
string s;
int nxt[N];
int main()
{
    cin >> s;
    int j = 0;
    int len = s.size();
    for (int i = 1; i < len; i++)
    {
        while (j && s[i] != s[j])
            j = nxt[j - 1];
        if (s[i] == s[j])
            j++;
        cout << i << ":" << j << endl;
        if (i - 1 == j || (len - i) == j)
            nxt[i] = j;
    }
    for (int i = 0; i < len; i++)
    {
        if (nxt[i] > 0)
        {
            cout << nxt[i] << " ";
        }
    }
    cout << len;
    return 0;
}