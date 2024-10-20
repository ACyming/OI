#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 20;
int n;
int mp[1005][1005], bz[1005][1005], ans, x, y;
int fx[] = {0, 1, -1, 0, 0}, fy[] = {0, 0, 0, -1, 1};
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d%d", &x, &y);
        mp[x][y] = 1;
        for (int j = 1; j <= 4; j++)
        {
            int xx = x + fx[j], yy = y + fy[j];
            if (xx >= 0 && yy >= 0 && yy <= 1000 && xx <= 1000)
            {
                
                bz[xx][yy]++;
                if(!mp[xx][yy]) continue;
                if (bz[xx][yy] == 3)
                    ans++;
                else if (bz[xx][yy] > 3)
                    ans--;
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}