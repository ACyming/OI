#include <bits/stdc++.h>
using namespace std;
int n;
const int maxN = 2e5 + 5;
struct GG
{
    int x;
    bool bz;
} a[maxN];

int main()
{
    
	freopen("fruit.in", "r", stdin);
	freopen("fruit.out", "w", stdout);
    
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i].x);
    int cnt = 0;
    while (cnt < n)
    {
        int xx = -1;
        for (int i = 1; i <= n; i++)
        {
            if (!a[i].bz && a[i].x != xx)
            {
                a[i].bz = true;
                cnt++;
                xx = a[i].x;
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    return 0;
}