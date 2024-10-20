#include <bits/stdc++.h>
using namespace std;
int t, n, m;
string s;
map<long long, bool> bz;
int main()
{
    cin >> t;
    while (t--)
    {
        int cnt = 0;
        cin >> n;
        cin >> s;
        for (int i = 0; i < n-2; i++)
        {
        	if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e')
            {
                cnt++;
                if (i >= 2)
                {
                    if (s[i - 1] == 'a' && s[i - 2] == 'm')
                        cnt--;
                }
            }
            if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p')
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}