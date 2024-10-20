#include <bits/stdc++.h>
#define int long long
const int ma = 2 * 1e5 + 10;
using namespace std;
int n, lsh[ma], t[ma];
int ans;
struct Node {
    int v, num;
} a[ma];
bool cmp(Node xx, Node yy)
{
    if (xx.v == yy.v)
        return xx.num < yy.num;
    return xx.v < yy.v;
}
void add(int x, int y)
{
    while (x <= n) {
        t[x] += y;
        x += (x & -x);
    }
}
int find(int x)
{
    int sum = 0;
    while (x > 0) {
        sum += t[x];
        x -= (x & -x);
    }
    return sum;
}
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].v;
        a[i].num = i;
    }
    sort(a + 1, a + 1 + n, cmp);
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i].num == a[i - 1].num) {
            lsh[a[i].num] = cnt;
        } else
            lsh[a[i].num] = ++cnt;
    }

    for (int i = 1; i <= n; i++) {
        add(lsh[i], 1);
        ans += i - find(lsh[i]);
    }
    cout << ans;
    return 0;
}