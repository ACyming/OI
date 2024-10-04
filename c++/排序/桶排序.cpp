#include <bits/stdc++.h>
using namespace std;
int n;
int a[100], b[100];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    for (int i = 1; i <= 100; i++)
    {
        if (b[i] > 0)
        {
            for (int j = 1; j <= b[i]; j++)
            {
                cout << i << " ";
            }
        }
    }
    return 0;
}