#include <bits/stdc++.h>
using namespace std;
const int N = 2010;
int f[N][N];
char s[N];
struct node
{
    int add, del;
} a[130];
int n, ll;
int main()
{
    cin >> n >> ll >> s + 1;
    for (int i = 1; i <= n; i++)
    {
        char c;
        cin >> c;
        cin >> a[c].add >> a[c].del;
    }
    memset(f, 0x3f, sizeof f);
    for (int i = 1; i <= ll; i++)
        f[i][i] = 0;
    int c1, c2;
    for (int len = 2; len <= ll; len++)
    {
        for (int i = 1; i + len - 1 <= ll; i++)
        {
            int j = i + len - 1;
            if (s[i] == s[j])
            {
                if (i + 1 == j)
                    f[i][j] = 0;
                else
                    f[i][j] = f[i + 1][j - 1];
            }
            else
            {
                c1 = min(f[i + 1][j] + a[s[i]].add, f[i][j - 1] + a[s[j]].add);
                c2 = min(f[i + 1][j] + a[s[i]].del, f[i][j - 1] + a[s[j]].del);
                f[i][j] = min(c1, c2);
            }
        }
    }
    cout << f[1][ll];
    return 0;
}