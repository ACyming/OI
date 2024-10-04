#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, minn = LONG_LONG_MAX;
int c[200001], vis[200001];
string a;
bool check()
{
    int cnt = 0;
    for (int i = 1; i < n; i++)
        if (a[i] == a[i - 1])
            cnt++;
    if (cnt == 1)
        return 1;
    else
        return 0;
}
void dfs(int x, int y)
{

    if (check()) {
        minn = min(minn, y);
        return;
    }
    if (x == n)
        return;
    for (int i = 0; i < n; i++) {
        if (vis[i] == 0) {
            vis[i] = 1;
            a[i] = a[i] == '1' ? '0' : '1';
            dfs(x + 1, y + c[i]);
            a[i] = a[i] == '1' ? '0' : '1';
            vis[i] = 0;
        }
    }
}
main()
{
    cin >> n >> a;
    for (int i = 0; i < n; i++)
        cin >> c[i];
    dfs(0, 0);
    cout << minn;
    return 0;
}