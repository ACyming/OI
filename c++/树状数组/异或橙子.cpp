#include <bits/stdc++.h>
#include <istream>
using namespace std;
const int N = 2 * 1e5 + 10;
int n, q;
int a[N];
struct Node {
    int t[N];
    void add(int x, int y)
    {
        while (x <= n) {
            t[x] ^= y;
            x += (x & -x);
        }
    }
    int find(int x)
    {
        int sum = 0;
        while (x > 0) {
            sum ^= t[x];
            x -= (x & -x);
        }
        return sum;
    }
} b[2];
int main()
{
    cin >> n >> q;
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        b[i % 2].add(i, a[i]);
    }
    int o, x, y;
    for (int i = 1; i <= q; i++) {
        scanf("%d%d%d", &o, &x, &y);
        if (o == 1) {
            b[x % 2].add(x, y ^ a[x]);
            a[x] = y;
        } else {
            if ((y - x) % 2)
                printf("0\n");
            else
                printf("%d", b[x % 2].find(y) ^ b[x % 2].find(x - 1));
        }
    }
    return 0;
}