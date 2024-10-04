#include <bits/stdc++.h>
using namespace std;
int n, b, d, t;
string s[1020];
int a[1020][1020], m[1020];
bool vis[1020];
int f(int i, int j)
{
    int cnt = 0;
    for (int k = 32 - b; k < 32; ++k)
        cnt += (s[i][k]) ^ (s[j][k]);
    return cnt;
}
void dfs(int last, int step)
{
    if (step > n) {
        for (int i = 1; i <= n; ++i)
            printf("%d ", m[i]);
        exit(0);
    }
    for (int i = last + 1; i < t; i++) {
        bool bz = 1;
        for (int j = 1; j < step; j++) {
            if (a[m[j]][i] < d) {
                bz = 0;
                break;
            }
        }
        if (bz && !vis[i]) {
            m[step] = i;
            vis[i] = 1;
            dfs(i, step + 1);
            vis[i] = 0;
        }
    }
}
int main()
{
#ifdef ONLINE_JUDGE
    freopen("hamming.in", "r", stdin);
    freopen("hamming.out", "w", stdout);
#endif
    cin >> n >> b >> d;
    t = pow(2, b);
    for (int i = 0; i < t; i++) {
        bitset<32> p(i);
        s[i] = p.to_string();
    }
    for (int i = 0; i < t; i++) {
        for (int j = i + 1; j < t; j++)
            a[i][j] = f(i, j);
    }
    dfs(-1, 1);
    return 0;
}