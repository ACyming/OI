#include <bits/stdc++.h>
using namespace std;
int n;
int a[200001], b[200001];
struct nn
{
    int x, y;
} ans[200001];

int cnt;
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]), b[i] = a[i];
    sort(b + 1, b + 1 + n);
    for (int i = 1; i <= n; i++)
    {
        while (a[i] != b[i])
        {
            ans[++cnt] = {a[i], a[a[i]]};
            swap(a[i], a[a[i]]);
        }
    }
    cout<<cnt<<endl;
    for (int i = cnt; i >= 1; i--)
    {
        cout << min(ans[i].y,ans[i].x) << " " << max(ans[i].y,ans[i].x) << endl;
    }
}
