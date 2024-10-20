#include <bits/stdc++.h>
using namespace std;
string opt, ord;
char a[5][5] = {{}, {'0', 'A', 'B'}, {'0', 'D', 'C'}};
void fun(char c) {
    if (c == 'R') {
        int cmp[5][5];
        for (int i = 1; i <= 2; i++)
            for (int j = 1; j <= 2; j++)
                cmp[i][j] = a[3 - j][i];
        for (int i = 1; i <= 2; i++)
            for (int j = 1; j <= 2; j++)
                a[i][j] = cmp[i][j];
                
    } else {
        int cmp[5][5];
        for (int i = 1; i <= 2; i++)
            for (int j = 1; j <= 2; j++)
                cmp[i][j] = a[j][3 - i];
        for (int i = 1; i <= 2; i++)
            for (int j = 1; j <= 2; j++)
                a[i][j] = cmp[i][j];
                
    }
}
int main() {
    cin >> opt >> ord;
    int len = opt.size();
    for (int i = 0; i < len; i++) {
        fun(opt[i]);
        if (ord[i] == 'o')
            cout << a[1][1];
    }
    return 0;
}
