#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a[2600][2600], f[2600][2600];
int book[11111111];
int ans;
main()
{
// #ifdef ONLINE_JUDGE
//     freopen("farmer.in", "r", stdin);
//     freopen("farmer.out", "w", stdout);
// #endif
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + a[i][j]; // 构建二维前缀和
    for (int i = 1; i <= n; i++)                                             // 枚举中心点
        for (int j = 1; j <= n; j++)
        {
            // 第一种情况：
            // 其中一个兄弟的牧场在左上方
            // 另外一个兄弟的牧场在右下方
            for (int x = 1; x <= i; x++)
                for (int y = 1; y <= j; y++)
                    book[f[i][j] - f[x - 1][j] - f[i][y - 1] + f[x - 1][y - 1]+3000000]++;
            // 统计每个收益出现的个数
            for (int x = i + 1; x <= n; x++)
                for (int y = j + 1; y <= n; y++)
                    ans += book[f[x][y] - f[i][y] - f[x][j] + f[i][j]+3000000];
            // 如果这个收益在上面出现过，就说明这两个兄弟的收益相等
            // 就加这个收益出现的个数
            for (int x = 1; x <= i; x++)
                for (int y = 1; y <= j; y++)
                    book[f[i][j] - f[x - 1][j] - f[i][y - 1] + f[x - 1][y - 1]+3000000] = 0;


            // 第二种情况：
            // 其中一个兄弟的牧场在左下方
            // 另外一个兄弟的牧场在右上方
            //(同上)
            for (int x = i + 1; x <= n; x++)
                for (int y = 1; y <= j; y++)
                    book[f[x][j] - f[i][j] - f[x][y - 1] + f[i][y - 1]+3000000]++;
            for (int x = 1; x <= i; x++)
                for (int y = j + 1; y <= n; y++)
                    ans += book[f[i][y] - f[x - 1][y] - f[i][j] + f[x - 1][j]+3000000];
            for (int x = i + 1; x <= n; x++)
                for (int y = 1; y <= j; y++)
                    book[f[x][j] - f[i][j] - f[x][y - 1] + f[i][y - 1]+3000000] = 0;
        }
    cout << ans;
    return 0;
}