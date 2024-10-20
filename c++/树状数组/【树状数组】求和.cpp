#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[100005], t[100005];
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

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        add(i, a[i]);
    }
    scanf("%d", &m);
    int x, y;
    char c;
    while (m--) {
        scanf(" %c", &c);
        scanf("%d%d", &x, &y);
        if (c == 'Q') {
            printf("%d\n", find(y) - find(x - 1));
        } else {
            add(x, y - a[x]);
            a[x] = y;
        }
    }
    return 0;
}