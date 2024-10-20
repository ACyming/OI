#include <bits/stdc++.h>
using namespace std;
int n, f[20][20][20][20][20];
int main() {
    cin >> n;
    int nn = n;
    while (nn--) {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        for (int i = 1; i <= 9; i++) {
            f[(a + i) % 10][b][c][d][e]++;
            f[a][(b + i) % 10][c][d][e]++;
            f[a][b][(c + i) % 10][d][e]++;
            f[a][b][c][(d + i) % 10][e]++;
            f[a][b][c][d][(e + i) % 10]++;
            f[(a + i) % 10][(b + i) % 10][c][d][e]++;
            f[a][(b + i) % 10][(c + i) % 10][d][e]++;
            f[a][b][(c + i) % 10][(d + i) % 10][e]++;
            f[a][b][c][(d + i) % 10][(e + i) % 10]++;
        }
    }
    int ans = 0;
    for (int i_1 = 0; i_1 <= 9; i_1++)
        for (int i_2 = 0; i_2 <= 9; i_2++)
            for (int i_3 = 0; i_3 <= 9; i_3++)
                for (int i_4 = 0; i_4 <= 9; i_4++)
                    for (int i_5 = 0; i_5 <= 9; i_5++)
                        if (f[i_1][i_2][i_3][i_4][i_5] == n)
                            ans++;
    cout << ans << endl;
    return 0;
}