#include <bits/stdc++.h>
using namespace std;
const int N = 100020, M = 500020;
int n, m, ans, cnt1, cnt2;
int a[N], head1[M], head2[M], dis1[N], dis2[N];
bool bz[N];
struct Node1
{
    int to, next;
} g1[M * 2];
struct Node2
{
    int to, next;
} g2[M * 2];
void add1(int u, int v)
{
    g1[++cnt1] = {v, head1[u]};
    head1[u] = cnt1;
}
void add2(int u, int v)
{
    g2[++cnt2] = {v, head2[u]};
    head2[u] = cnt2;
}

void SPFA1(int x)
{
    memset(dis1, 0x3f, sizeof(dis1));
    memset(bz, 0, sizeof(bz));
    queue<int> q;
    bz[x] = 1;
    dis1[x] = a[x];
    q.push(x);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        bz[u] = 0;
        for (int i = head1[u]; i; i = g1[i].next)
        {
            int v = g1[i].to;
            if (dis1[v] > min(dis1[u], a[v]))
            {
                dis1[v] = min(dis1[u], a[v]);
                if (!bz[v])
                {
                    q.push(v);
                    bz[v] = 1;
                }
            }
        }
    }
}
void SPFA2(int x)
{
    memset(dis2, -0x3f, sizeof(dis2));
    memset(bz, 0, sizeof(bz));
    queue<int> q;
    bz[x] = 1;
    dis2[x] = a[x];
    q.push(x);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        bz[u] = 0;
        for (int i = head2[u]; i; i = g2[i].next)
        {
            int v = g2[i].to;
            if (dis2[v] < max(dis2[u], a[v]))
            {
                dis2[v] = max(dis2[u], a[v]);
                if (!bz[v])
                {
                    q.push(v);
                    bz[v] = 1;
                }
            }
        }
    }
}
int main()
{
#ifdef ONLINE_JUDGE
    freopen("trade.in", "r", stdin);
    freopen("trade.out", "w", stdout);
#endif
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        add1(x, y);
        add2(y, x);
        if (z == 2)
        {
            add1(y, x);
            add2(x, y);
        }
    }
    SPFA1(1);
    SPFA2(n);
    ans = INT_MIN;
    for (int i = 1; i <= n; i++)
        ans = max(dis2[i] - dis1[i], ans);
    cout << ans;
    return 0;
}