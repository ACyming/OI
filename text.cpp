#include <bits/stdc++.h>
using namespace std;


int main() {
    n = read(), m = read();
    for (int i = 1; i <= n; i++) {
        scanf("%s", c + 1);
        for (int j = 1; j <= m; j++) {  // 数字存图
            if (c[j] == 'R')
                a[i][j] = 1;
            else if (c[j] == 'F')
                a[i][j] = 2;
            else
                a[i][j] = 0;
        }
    }
    q[0].push(make_pair(1, 1));
    vis[1][1] = 1;
    for (int i = 0; bfs(i); i = !i, ans++)
        ;
    write(ans + 1);
}