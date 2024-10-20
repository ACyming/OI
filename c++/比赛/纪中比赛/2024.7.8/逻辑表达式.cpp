#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
char s[N], n, cnt;
char q[N], p[N], a[N], b[N];
int ans1, ans2;
int dfs(int l, int r)
{
    if (a[r] >= l)
    {
        int x = dfs(l, a[r] - 1);
        if (x == 1)
        {
            ans2++;
            return 1;
        }
        return (x | dfs(a[r] + 1, r));
    }
    if (b[r] >= l)
    {
        int x = dfs(l, b[r] - 1);
        if (x == 0)
        {
            ans1++;
            return 0;
        }
        return (x & dfs(b[r] + 1, r));
    }
    if (s[l] == '(' && s[r] == ')')
        return dfs(l + 1, r - 1);
    return s[l] - '0';
}
int main()
{
#ifdef ONLINE_JUDGE
    freopen("expr.in", "r", stdin);
    freopen("expr.out", "w", stdout);
#endif
    scanf("%s", s + 1);
    n = strlen(s + 1);
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == '(')
            cnt++;
        if (s[i] == ')')
        {
            q[cnt] = p[cnt] = 0;
            cnt--;
        }
        if (s[i] == '&')
            q[cnt] = i;
        if (s[i] == '|')
            p[cnt] = i;
        a[i] = p[cnt];
        b[i] = q[cnt];
    }
    int ans = dfs(1, n);
    cout << ans << endl
         << ans1 << " " << ans2;
    return 0;
}