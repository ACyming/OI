#include <bits/stdc++.h>
using namespace std;
const int N = 1020;
int a, b, n;
int f[200][200]; //f[i,j]表示物抗为i魔抗为j时最小的金额数
struct Node{int w, m, v;} g[1000];
int main()
{
#ifdef ONLINE_JUDGE
    freopen("equipment.in", "r", stdin);
    freopen("equipment.out", "w", stdout);
#endif
    cin >> a >> b >> n;
    for (int i = 1; i <= n; i++)
        cin >> g[i].w >> g[i].m >> g[i].v;
    memset(f, 0x3f, sizeof(f));
    f[0][0] = 0;
    for (int i = 1; i <= n; i++)
        for (int j = a; j >= 0; j--)
            for (int k = b; k >= 0; k--)  
            {
                int x = j + g[i].w;
                int y = k + g[i].m;
                x = min(x, a);
                y = min(y, b);//如果i + ai大于a，则将f[i + ai]更新到f[a]中去
                f[x][y] = min(f[x][y], f[j][k] + g[i].v);
            }
    cout << f[a][b];
}