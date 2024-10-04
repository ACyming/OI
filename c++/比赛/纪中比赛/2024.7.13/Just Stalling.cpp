#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a[30], b[30], ans = 1;

int ef(int l, int r, int i)
{
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (a[mid] > b[i])
            r = mid;
        else
            l = mid + 1;
    }
    return l--;
}
void qsort(int left, int right, int a[])
{
    int temp, t, i, j;
    if (left > right)
        return;
    temp = a[left];
    i = left;
    j = right;
    while (i != j)
    {
        while (a[j] >= temp && i < j)
            j--;
        while (a[i] <= temp && i < j)
            i++;
        if (i < j)
        {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    a[left] = a[i];
    a[i] = temp;
    qsort(left, i - 1, a);
    qsort(i + 1, right, a);
    return;
}
main()
{
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++)
        scanf("%lld", &a[i]);
    a[n + 1] = INT_MAX;
    for (int i = 1; i <= n; i++)
        scanf("%lld", &b[i]);
    qsort(1, n, a);
    qsort(1, n, b);
    for (int i = 1; i <= n; i++)
        ans *= (ef(1, n + 1, i) - i);
    cout << ans;
    return 0;
}
