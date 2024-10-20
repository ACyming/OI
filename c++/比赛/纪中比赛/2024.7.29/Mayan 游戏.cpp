#include <bits/stdc++.h>
using namespace std;
int n, mp[10][10][10], bz[10][10];

void pr(int x) {
    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 5; j++)
            cout << mp[x][i][j] << " ";
        cout << endl;
    }
}
void mset(int x) {
    for (int i = 1; i <= 7; i++)
        for (int j = 1; j <= 5; j++)
            mp[x][i][j] = mp[x - 1][i][j];
}
void fall(int x) {
    for (int i = 1; i <= 7; i++)
        for (int j = 1; j <= 5; j++) {
            if (i + 1 > 7)
                continue;
            if (mp[x][i + 1][j] == 0 && mp[x][i][j] != 0)
                swap(mp[x][i][j], mp[x][i + 1][j]);
        }
}
void mix(int x) {
    bool vis[10][10], flag = 0;

    do {
        flag = 0;
        fall(x);
        for (int i = 1; i <= 7; ++i)
            for (int j = 1; j <= 5; ++j)
                vis[i][j] = 0;
        for (int i = 1; i <= 7; i++)
            for (int j = 1; j <= 5; j++) {
                if (mp[x][i][j] == 0)
                    continue;
                if (i - 1 > 0 && i + 1 <= 7 &&
                    mp[x][i - 1][j] == mp[x][i][j] &&
                    mp[x][i + 1][j] == mp[x][i][j])
                    vis[i][j] = vis[i - 1][j] = vis[i + 1][j] = 1, flag = 1;
                if (j - 1 > 0 && j + 1 <= 5 &&
                    mp[x][i][j - 1] == mp[x][i][j] &&
                    mp[x][i][j + 1] == mp[x][i][j])
                	vis[i][j] = vis[i][j - 1] = vis[i][j + 1] = 1, flag = 1;
            }
        for (int i = 1; i <= 7; i++)
            for (int j = 1; j <= 5; j++)
                mp[x][i][j] = vis[i][j] ==1?0:mp[x][i][j];

    } while (flag);
}

int ans[10][10];
void dfs(int step) {
    mset(step);
    if (step == n + 1) {
        int t = 0;

        for (int i = 1; i < 8; ++i) {
            for (int j = 1; j < 6; ++j)
                t = max(t, mp[step][i][j]);
        }

        if (!t) {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= 3; j++)
                    cout << ans[i][j] << " ";
                cout << endl;
            }
            exit(0);
        }

        return;
    }
    
    for (int j = 1; j <= 5; j++)
        for (int i = 7; i >= 1; i--) {
            if (mp[step][i][j] == 0 || bz[i][j])
                continue;
            if (j < 5 && mp[step][i][j] != mp[step][i][j + 1]) {
                swap(mp[step][i][j + 1], mp[step][i][j]);
                bz[i][j] = 1;
                mix(step); 
                ans[step][1] = j - 1, ans[step][2] = 7 - i, ans[step][3] = 1;
                dfs(step + 1);
                bz[i][j] = 0;
            }

            mset(step);

            if (j > 1 && !mp[step][i][j - 1]) {
                swap(mp[step][i][j - 1], mp[step][i][j]);
                bz[i][j] = 1;
                mix(step);
                ans[step][1] = j - 1, ans[step][2] = 7 - i, ans[step][3] = -1;
                dfs(step + 1);
                bz[i][j] = 0;
            }
			
			mset(step);
        }
}
int main() {
    cin >> n;
    for (int i = 1; i <= 5; i++) {
        int x, cnt = 7;
        do {
            cin >> x;
            mp[0][cnt][i] = x;
            cnt--;

        } while (x != 0);
    }
    dfs(1);
    cout << -1;
    return 0;
}