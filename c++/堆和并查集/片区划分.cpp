#include <bits/stdc++.h>
using namespace std;
int n, m, k;
int f[1020];
int ans;
struct Node {
    int x, y, w;
} a[10020];
bool cmp(Node xx, Node yy)
{
    return xx.w < yy.w;
}
int find(int x)
{
    return x == f[x] ? x : f[x] = find(f[x]);
}
bool check()
{
    int cmp = 0;
    for (int i = 1; i <= n; i++) {
        if (find(i) == i)
            cmp++;
        if (cmp > k)
            return 0;
    }
    return 1;
}
int main()
{
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
        f[i] = i;
    for (int i = 1; i <= m; i++)
        cin >> a[i].x >> a[i].y >> a[i].w;
    sort(a + 1, a + 1 + m, cmp);
    for (int i = 1; i <= m; i++) {
        int fx = find(a[i].x);
        int fy = find(a[i].y);
        // cout << fx << " " << fy << endl;
        if (fx != fy) {
            f[fx] = fy;
            ans += a[i].w;
        }
        if (check()) {
            cout << ans;
            return 0;
        }
        
    }
    cout << "No Answer";
    return 0;
}