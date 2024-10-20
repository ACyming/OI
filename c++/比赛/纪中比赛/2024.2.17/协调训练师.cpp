#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
char mp[100][100];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int sx[3], sy[3], cnt;
int d[1000000][5];
bool vis[80][80][80][80], blog1 = 1, blog2 = 1;
void bfs(int px, int py, int ex, int ey)
{
    int head = 0, tail = 1;
    d[1][0] = px;
    d[1][1] = py;
    d[1][2] = 0;
    d[1][3] = ex;
    d[1][4] = ey;

    while (head < tail) {
        head++;
        for (int i = 0; i < 4; i++) {
            int pxx = d[head][0] + dx[i];
            int pyy = d[head][1] + dy[i];
            int exx = d[head][3] + dx[i];
            int eyy = d[head][4] + dy[i];
            if (pxx > n)
                pxx--;
            if (pxx < 1)
                pxx++;
            if (pyy > n)
                pyy--;
            if (pyy < 1)
                pyy++;
            if (exx > n)
                exx--;
            if (exx < 1)
                exx++;
            if (eyy > n)
                eyy--;
            if (eyy < 1)
                eyy++;
            tail++;
            d[tail][2] = d[head][2] + 1;
            if (mp[pxx][pyy] == '#') {
                d[tail][0] = d[head][0];
                d[tail][1] = d[head][1];
            } else {
                d[tail][0] = pxx;
                d[tail][1] = pyy;
            }
            if (mp[exx][eyy] == '#') {
                d[tail][3] = d[head][3];
                d[tail][4] = d[head][4];
            } else {
                d[tail][3] = exx;
                d[tail][4] = eyy;
            }
            if (vis[d[tail][0]][d[tail][1]][d[tail][3]][d[tail][4]]) {
                tail--;
                continue;
            }
            vis[d[tail][0]][d[tail][1]][d[tail][3]][d[tail][4]] = 1;
            //			cout << d[tail][2] << " " << d[head][0] << " " << d[head][1] << " " << d[head][0] << " " << d[head][1] << ":" << d[tail][3] << " " << d[tail][4] << " " << d[tail][3] << " " << d[tail][4] << endl;
            if (d[tail][0] == d[tail][3] && d[tail][1] == d[tail][4]) {
                if (d[tail][2] == 0) {
                    d[tail][2] = -1;
                }
                cout << d[tail][2];
                exit(0);
            }
        }
    }
}
main()
{
#ifdef ONLINE_JUDGE
    freopen("trainer.in", "r", stdin);
    freopen("trainer.out", "w", stdout);
#endif
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            cin >> mp[i][j];
            if (mp[i][j] == 'P') {
                sx[++cnt] = i;
                sy[cnt] = j;
            }
        }
    bfs(sx[1], sy[1], sx[2], sy[2]);
    cout << "-1";
    return 0;
}