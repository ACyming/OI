#include <bits/stdc++.h>
using namespace std;
int n;
string s1, s2, s3;
int a[30];
bool bz[30];
bool check()
{

    int s_1[30], s_2[30], s_3[30], ss[30];
    memset(s_1, 0, sizeof(s_1));
    memset(s_2, 0, sizeof(s_2));
    memset(s_3, 0, sizeof(s_3));
    for (int i = 0; i < n; i++)
    {
        s_1[i] = a[(int)s1[i] - 'A' + 1];
        s_2[i] = a[(int)s2[i] - 'A' + 1];
        s_3[i] = a[(int)s3[i] - 'A' + 1];
    }
    int jw = 0;
    for (int i = n; i > 0; i--)
    {
        ss[i] = s_1[i] + s_2[i] + jw;
        jw = ss[i] / n;
        ss[i] %= n;
        if (ss[i] != s_3[i])
            return 0;
    }
    return 1;
}
void dfs(int x)
{
    if (x == n && a[s1[n - 1] - 'a' + 1] + a[s2[n - 1] - 'a' + 1] > n)
        return;
    if (x == n + 1)
    {
        if (check())
            for (int i = 1; i <= n; i++)
                cout << a[i] << " ";
        return;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (!bz[i])
        {
            a[x] = i;
            bz[i] = 1;
            dfs(x + 1);
            bz[i] = 0;
        }
    }
}
int main()
{
#ifdef ONLINE_JUDGE
    freopen("alpha.in", "r", stdin);
    freopen("alpha.out", "w", stdout);
#endif
    cin >> n;
    cin >> s1 >> s2 >> s3;
    dfs(1);
    return 0;
}