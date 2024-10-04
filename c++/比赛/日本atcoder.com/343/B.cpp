#include <bits/stdc++.h>
using namespace std;
int n;
int g[120][120];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> g[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (g[i][j])
                cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}