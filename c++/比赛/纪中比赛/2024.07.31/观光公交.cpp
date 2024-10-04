#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, k, ans, sum[1020];
int d[1020];
struct vi {
    int s, e;
} v[10200];
struct cr {
    int last /*发车的时间*/, num /*在第i站上车的人数*/,
        arrive /*到第i个站所需的时间*/;
} car[1020];
inline int read() {
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
        x = x * 10 + ch - '0', ch = getchar();
    return x * f;
}
void write(int x) {
    if (x < 0)
        putchar('-'), x = -x;
    if (x > 9)
        write(x / 10);
    putchar(x % 10 + '0');
    return;
}

main() {
    n = read(), m = read(), k = read();
    for (int i = 2; i <= n; i++)
        d[i] = read();
    int from;
    for (int i = 1; i <= m; i++) {
        v[i].s = read(), from = read(), v[i].e = read();
        car[from].last = max(car[from].last, v[i].s);
        car[v[i].e].num++;
        ans -= v[i].s;  // 减去罚站的人
    }
    for (int i = 2; i <= n; i++)
        car[i].arrive = max(car[i - 1].arrive, car[i - 1].last) +
                        d[i];  // 计算不用加速时到第i个站所需的时间
    for (int j = 1; j <= k; j++) {
        for (int i = n; i >= 2; i--) {
            sum[i] = car[i].num;  // sum表示在第i个站上车的人的个数
            if (car[i].last < car[i].arrive)  // 人等车的情况
                sum[i] += sum[i + 1];         // 加上上一个站的人
        }
        int maxx = 0, num = 0;
        for (int i = 1; i <= n; i++) {
            if (maxx < sum[i] && d[i] > 0) {  // 贪心
                maxx = sum[i];
                num = i;
            }
        }
        if (!num)
            break;
        d[num]--;
        for (register int i = num; i <= n; i++)
            car[i].arrive =
                max(car[i - 1].arrive, car[i - 1].last) + d[i];  // 更新arrive
    }
    for (register int i = 2; i <= n; i++)
        ans += (car[i].num * car[i].arrive);
    write(ans);
    return 0;
}