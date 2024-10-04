#include <bits/stdc++.h>
using namespace std;
int a, b, Pow[20], f[20][20];
int calc(int x) // 求一个数有多少位
{
    int ans = 0;
    while (x)
        x /= 10, ans++;
    return ans;
}
int dfs(int x, int y, int d, int flag, int f0)
{
    if (y == 0)
        return 1;
    if (f[y][d] != -1 && !flag)
        return f[y][d];
    int up = flag == 1 ? x / Pow[y - 1] % 10 : 9, ans = 0;
    for (int i = 0; i <= up; i++)
        if (!f0 && abs(i - d) >= 2 || f0)
            ans += dfs(x, y - 1, i, flag && i == up, f0 && !i);
    if (!flag && !f0)
        f[y][d] = ans;
    return ans;
}
int main()
{
    cin >> a >> b;
    Pow[0] = 1;
    for (int i = 1; i <= 18; i++)
        Pow[i] = Pow[i - 1] * 10;
    memset(f, -1, sizeof(f));
    int cmp1 = dfs(b, calc(b), 0, 1, 1);
    memset(f, -1, sizeof(f));
    int cmp2 = dfs(a - 1, calc(a - 1), 0, 1, 1);
    cout << cmp1 - cmp2;
    return 0;
}