#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
int num[200003]; // 表示可以选择的数组
int x, y, cnt;   // x: 小x的数值
                 // y: 小y的数值
bool cmp(int x, int y)
{
    return x > y; // 排序
}
main()
{
#ifdef ONLINE_JUDGE
    freopen("game.in", "r", stdin);
    freopen("game.out", "w", stdout);
#endif
    cin >> n; // 输入
    for (int i = 1; i <= n; i++) {

        int a, b;
        cin >> a >> b; // 还是输入
        if (a > b) {   // 只有当a > b时才将 a , b 加入到可以选择的数组中
            /*因为题目说了，小x和小y只会做出最自己完全有利的决策
              所以如果 a < b 时，是没有人会去第一个拿掉上面的牌的
              接着，当 a = b 时，两人同时加上一个数，是没有意义的  x=y,a=b ->  a + x = y + b
              所以通过这样来筛选掉没有必要的牌堆
            */
            num[++cnt] = a;
            num[++cnt] = b; // 加入可以选择的数组中
        }
    }
    sort(num + 1, num + 1 + cnt, cmp); // 进行排序，把越大的排在越前，即体现出两个人每次都拿最大的
    for (int i = 1; i <= cnt; i++) {
        // 遍历可以选择的数组
        if (i % 2 != 0) /*判断是谁来取数 ，即：当i=1,3,5...小x取
                                               当i=2,4,6...小y取，也就是：奇数：小x，偶数：小y*/
            x += num[i];
        else
            y += num[i];
    }
    cout << x - y;
    return 0;
}