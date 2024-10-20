#include <bits/stdc++.h>
using namespace std;
const int N = 5 * 1e5 + 10;
int n, q;
char c;
int a[N], t[N], b[N];
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
void ch(int x, int y)
{
    if (x != 1) { // 防越界
        if (b[x - 1]) {
            add(x - 1, -1);
            b[x - 1] = 0;
        } else {
            add(x - 1, 1);
            b[x - 1] = 1;
        }
    }
    if (b[y]) {
        add(y, -1);
        b[y] = 0;
    } else {
        add(y, 1);
        b[y] = 1;
    }
}
int main()
{
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> c;
        a[i] = c - '0';
        if (i != 1) // 防止越界
        {
            b[i - 1] = a[i - 1] ^ a[i]; // 以此更改为单点修改
            add(i - 1, b[i - 1]);
        }
    }
    int o, x, y;
    for (int i = 1; i <= q; i++) {
        cin >> o >> x >> y;
        if (o == 1) {
            ch(x, y);
        } else {
            if (find(y - 1) - find(x - 1) == y - x)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}