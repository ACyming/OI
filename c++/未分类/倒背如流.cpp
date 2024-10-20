#include <bits/stdc++.h>
using namespace std;
struct Node // 定义结构体
{
    long long a[100000];
    Node() // 初始化
    {
        memset(a, 0, sizeof(a));
    }
    void bian(string x) // 字符串转整型数组
    {
        long long len = x.size();
        for (long long i = 1; i <= len; i++) {
            a[i] = x[len - i] - '0';
        }
        a[0] = len; // a[0]保存长度
        return;
    }
    Node operator+(Node &y) // 重载加法
    {
        Node tmp;
        long long z = 0;
        tmp.a[0] = max(a[0], y.a[0]);
        for (long long i = 1; i <= tmp.a[0]; i++) // 高精度加法
        {
            tmp.a[i] = a[i] + y.a[i] + z;
            z = tmp.a[i] > 9;
            tmp.a[i] %= 10;
        }
        if (z > 0)
            tmp.a[++tmp.a[0]] = z;
        return tmp; // 返回两个数的和
    }
};
Node n1, n2;
string s1[120];
int main()
{
    freopen("c.in", "r", stdin);
    freopen("c.out", "w", stdout);
    int n;
    cin >> n;
    int maxx = -143243215;
    for (int i = 1; i <= n; i++) {
        cin >> s1[i];
        int tmp = s1[i].size();
        maxx = max(maxx, tmp);
        reverse(s1[i].begin(), s1[i].end());
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= maxx - s1[i].size(); j++) {
            s1[i].insert(0, "0");
        }
        // cout << s1[i] << endl;
        n1.bian(s1[i]);
        n2 = n2 + n1;
    }
    for (long long i = n2.a[0]; i >= 1; i--) // 输出（a[0]是长度）
    {
        cout << n2.a[i];
    }
    return 0;
}