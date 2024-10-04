
#include <bits/stdc++.h>

using namespace std;
struct N1 {
    int x, y;
} a;
struct N2 {
    int x, y;
} b;
struct N3 {
    int x, y;
} ans;
int main()
{
    freopen("b.in", "r", stdin);
    freopen("b.out", "w", stdout);
    scanf("%d%d%d%d", &a.x, &a.y, &b.x, &b.y);
    int tmp = a.y * b.y;
    ans = {abs(a.x * b.y - a.y * b.x), tmp};
    if (ans.x % tmp == 0)
        cout << ans.x / tmp;
    else {
        int gc = __gcd(ans.x, ans.y);
        cout << ans.x / gc << " " << ans.y / gc;
    }
    return 0;
}