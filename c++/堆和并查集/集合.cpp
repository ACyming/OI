#include <bits/stdc++.h>
using namespace std;
int ans;
int a, b, p;
bool prime[100020];
int f[100020];
int find(int x)
{
    return f[x] == x ? x : f[x] = find(f[x]);
}
int main()
{
    cin >> a >> b >> p;
    for (int i = a; i <= b; i++)
        f[i] = i;
    ans = b - a + 1; // 将答案初始化为a~b间数的个数
    memset(prime, 1, sizeof(prime));
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= b; i++) {
        if (prime[i]) {
            if (i >= p)
                for (int j = 2 * i; j <= b; j += i) {
                    prime[j] = 0;
                    if (j - i >= a && find(j) != find(j - i)) // 将当前被筛的数与上一个被筛的数合并
                    {
                        f[find(j)] = find(j - i);
                        --ans;
                    }
                }
            else
                for (int j = 2 * i; j <= b; j += i)
                    prime[j] = 0;
        }
    }
    cout << ans;
    return 0;
}
