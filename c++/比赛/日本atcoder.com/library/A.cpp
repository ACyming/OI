#include <bits/stdc++.h>
using namespace std;
int n, q;
int fa[200001];
int find(int x)
{
    return x == fa[x] ? x : fa[x] = find(fa[x]);
}
void hb(int x, int y)
{
    int xx = find(x);
    int yy = find(y);
    if (xx != yy) {
        fa[xx] = yy;
    }
    return;
}
int main()
{
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        fa[i] = i;
    while (q--) {
        int x, y, z;
        cin >> x >> y >> z;
        if (x == 0) {
            hb(y, z);
        } else {
            if (find(y) == find(z))
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
    }
    return 0;
}
