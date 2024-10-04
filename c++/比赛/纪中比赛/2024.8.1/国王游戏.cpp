#include <bits/stdc++.h>
#define srjxrwszb return 0
using namespace std;
const int LEN = 4000;
int n, sum[LEN], tmp[LEN], ans[LEN];
struct GG {
    int x, y;
} a[1020];
bool cmp(GG xx, GG yy) {
    return xx.x * 1.0 / yy.y < yy.x * 1.0 / xx.y;
}
void clear(int a[]) {
    for (int i = 0; i < LEN; i++)
        a[i] = 0;
}
void co(int a[], int x) {
    int cnt = 0;
    while (x > 0) {
        a[cnt++] = x % 10;
        x /= 10;
    }
    return;
}
void co(int a[], int b[]) {
    for (int i = 0; i < LEN; i++)
        a[i] = b[i];
    return;
}
int div(int a[], int b, int c[]) {
    clear(c);
    int x = 0;
    for (int i = LEN - 1; i >= 0; i--) {
        x = x * 10 + a[i];
        c[i] = x / b;
        x %= b;
    }
}
bool minn(int a[], int b[]) {
    for (int i = LEN - 1; i >= 0; i--) {
        if (a[i] < b[i])
            return 1;
        if (a[i] > b[i])
            return 0;
    }
    return 0;
}
void cheng(int a[], int b, int c[]) {
    clear(c);
    for (int i = 0; i < LEN - 1; i++) {
        c[i] += a[i] * b;
        if (c[i] > 9) {
            c[i + 1] += c[i] / 10;
            c[i] %= 10;
        }
    }
}
int main() {
    cin >> n;
    for (int i = 0; i <= n; i++) {
        cin >> a[i].x >> a[i].y;
    }
    sort(a + 1, a + 1 + n, cmp);
    co(sum, a[0].x);
    for (int i = 1; i <= n; i++) {
        div(sum, a[i].y, tmp);
        if (minn(ans, tmp))
            co(ans, tmp);
        cheng(sum, a[i].x, tmp);
        co(sum, tmp);
    }
    int i;
    for (i = LEN - 1; i; i--) {
        if (ans[i])
            break;
    }
    for (; i >= 0; i--)
        cout << ans[i];
    srjxrwszb;
}
/*

$$
\begin{aligned}
ax~+~by~&=~c（a,~b~为常数）\\
\gcd\left(a,~b\right)+\left(\frac{a}{\gcd(a,~b)}x + \frac{b}{\gcd(a,~b)}y\right)~&=~c（乘法分配律）\\
\because z~+~ax~+~by~&=~\gcd(a,~b)~+~z~=~c（z~是一个常数）\\
\therefore ax~+~by~=~\gcd(a,~b)\\
ax~+~by~&=~\gcd(a,~b)①\\
ax~\equiv 1(x\mod b)\\
ax~+~by~&=~1\\
ax~+~by~&=~\gcd(a,b)\\
\gcd(a,~b)~&=~\gcd(b,a\mod b)\\
ax+by&=\gcd(a,b)\\
bx'+(a\mod b)y'&=\gcd(a,b)\\
bx'+(a-\lfloor\frac{a}{b}b\rfloor) y'&=\gcd(a,b)\\
bx'+ay'-\lfloor\frac{a}{b}b\rfloor y' &=\gcd(a,b)\\
ay'-(x'-\lfloor\frac{a}{b}\rfloor y')b&=\gcd(a,b) = 1\\(这个和公式①很像，于是可以得出：&x=y',y=x'-\lfloor\frac{a}{b}\rfloor y')
\end{aligned}
$$


*/