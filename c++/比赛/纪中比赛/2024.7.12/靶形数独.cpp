#include <bits/stdc++.h>

using namespace std;
long long mp[20][20], a[20][20] = {
                          {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                          {0, 6, 6, 6, 6, 6, 6, 6, 6, 6},
                          {0, 6, 7, 7, 7, 7, 7, 7, 7, 6},
                          {0, 6, 7, 8, 8, 8, 8, 8, 7, 6},
                          {0, 6, 7, 8, 9, 9, 9, 8, 7, 6},
                          {0, 6, 7, 8, 9, 10, 9, 8, 7, 6},
                          {0, 6, 7, 8, 9, 9, 9, 8, 7, 6},
                          {0, 6, 7, 8, 8, 8, 8, 8, 7, 6},
                          {0, 6, 7, 7, 7, 7, 7, 7, 7, 6},
                          {0, 6, 6, 6, 6, 6, 6, 6, 6, 6}};
bool hang[20][20], lie[20][20], fg[10][10][20];
long long ans = -1;
struct GG
{
    int x, y;
} _0[20];
bool cmp(GG xx, GG yy)
{
    return xx.x < yy.x;
}
void dfs(long long x, long long cnt)
{
    if (x >= 81)
    {
        ans = max(ans, cnt);
        return;
    }
    for (int gg = 1; gg <= 9; gg++)
    {
        int i = _0[gg].y;
        for (int j = 9; j >= 1; j--)
        {
            if (!mp[i][j])
            {
                for (int k = 9; k >= 1; k--)
                {
                    if (!hang[i][k] && !lie[j][k])
                    {
                        int xx, yy;
                        if (i % 3 == 0)
                            xx = i / 3;
                        else
                            xx = i / 3 + 1;
                        if (j % 3 == 0)
                            yy = j / 3;
                        else
                            yy = j / 3 + 1;
                        if (!fg[xx][yy][k])
                        {
                            mp[i][j] = k;
                            hang[i][k] = lie[j][k] = fg[xx][yy][k] = 1;
                            dfs(x + 1, cnt + a[i][j] * k);
                            hang[i][k] = lie[j][k] = fg[xx][yy][k] = 0;
                            mp[i][j] = 0;
                        }
                    }
                }
                return;
            }
        }
    }
}
int main()
{
#ifdef ONLINE_JUDGE
    freopen("sudoku.in", "r", stdin);
    freopen("sudoku.out", "w", stdout);
#endif
    int jf = 0, fk = 0;
    for (long long i = 1; i <= 9; i++)
        for (long long j = 1; j <= 9; j++)
        {
            cin >> mp[i][j];
            if (mp[i][j] != 0)
            {
                fk++;
                hang[i][mp[i][j]] = 1, lie[j][mp[i][j]] = 1;
                long long xx, yy;
                if (i % 3 == 0)
                    xx = i / 3;
                else
                    xx = i / 3 + 1;
                if (j % 3 == 0)
                    yy = j / 3;
                else
                    yy = j / 3 + 1;
                fg[xx][yy][mp[i][j]] = 1;
            }
            else
                _0[i].x++, _0[i].y = i;
            jf += mp[i][j] * a[i][j];
        }
    sort(_0 + 1, _0 + 10, cmp);
    dfs(fk, jf);
    cout << ans;
    return 0;
}