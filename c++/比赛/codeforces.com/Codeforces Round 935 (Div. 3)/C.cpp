#include <bits/stdc++.h>
using namespace std;
int n, t, ans;
double m;
char s[3 * (int)1e5 + 10];
int s1[3 * (int)1e5 + 10], s2[3 * (int)1e5 + 10];
void csh()
{
    for (int i = 1; i <= n; i++)
    {
        s1[i] = s1[i - 1];
        if (s[i] == '0')
            s1[i]++;
    }
    for (int i = n - 1; i >= 0; i--)
    {                  
        s2[i] = s2[i + 1];
        if (s[i + 1] == '1')
            s2[i]++;
    }
}   
int main()
{
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        memset(s1, 0, sizeof(s1));
        memset(s2, 0, sizeof(s2));
        scanf("%d%s", &n, s + 1);
        ans = n;
        m = n;
        csh();
        for (int j = 0; j <= n; j++)
        {
            if (s1[j] >= j / 2.0 && s2[j] >= (n - j) / 2.0)
            {
                if (m >= abs(n / 2.0 - j))
                {
                    if (m == abs(n / 2.0 - j))
                        ans = min(ans, j);
                    else
                        ans = j;
                    m = abs(n / 2.0 - j);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
