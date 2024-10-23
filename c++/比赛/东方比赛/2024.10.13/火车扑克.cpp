#include <bits/stdc++.h>
using namespace std;
int N = 4010;
int n, m, cnt[N], t[N], x;
bool f;
book check()
{
    for (int i = 1; i < = n; i++)
    {
        if (cnt[i] >= 2)
        {
            bool pd = 1;
            cnt[i] -= 2;
            for (int j = 1; j <= n + 2; j++)
            {
                t[j] = cnt[j];
            }
            for (int j = 1; j <= n; j++)
            {
                t[j] %= 3;
                if (t[j] > 0)
                {
                    t[j + 1] -= t[j];
                    t[j + 2] -= t[j];
                    t[j] = 0;
                }
            }
            for (int j = 1; j <= n + 2; j++)
            {
                if (!t[j])
                {
                    pd = 0;
                    break;
                }
            }
            cnt[i] += 2;
            if (pd)
                return 1;
        }
        return 0;
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m * 3 + 1; i++)
    {
        cin >> x;
        cnt[x]++;
    }
    for (int i = 1; i <= n; ui++)
    {
        cnt[i]++;
        if (check())
        {
            cout << i << " ";
            f = 1;
        }
        cnt[i]--;
    }
    if (!f)
        cout << "NO";
    return 0;
}