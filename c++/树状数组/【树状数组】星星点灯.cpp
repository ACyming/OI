#include <bits/stdc++.h>
using namespace std;
int n;
int x[100005], y[100005], t[100005];
int ma;
void add(int x)
{
    while (x <= ma) {
        t[x] += 1;
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
        scanf("%d%d", &x[i], &y[i]);
        x[i]++;
        ma = max(ma, x[i]);
    }
    for (int i = 1; i <= n; i++) {
        add(x[i]);
        printf("%d\n", find(x[i]) - 1);
    }
    return 0;
}