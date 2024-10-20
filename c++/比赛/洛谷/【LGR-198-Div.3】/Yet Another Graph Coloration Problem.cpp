#include <bits/stdc++.h>  
  
using namespace std;  
  
const int MAXN = 200005;
vector<int> adj[MAXN];
char ans[MAXN];
bool vis[MAXN];
bool dfs(int x, char c) {  
    if (vis[x]) return true;
    vis[x] = true;  
    ans[x] = c;  
    for (int xx : adj[x]) {  
        if (!vis[xx]) {  
            if (!dfs(xx, c == 'B' ? 'W' : 'B')) {  
                return false;  
            }  
        }  
    }  
  
    return true;  
}  
  
int main() {  
    int T;  
    cin >> T;
    while (T--) {  
        int n, m;  
        cin >> n >> m;
  
        for (int i = 0; i < n; ++i) {  
            adj[i].clear();  
            vis[i] = false;  
            ans[i] = 0;
        }  
        for (int i = 0; i < m; ++i) {  
            int u, v;  
            cin >> u >> v;  
            adj[u - 1].push_back(v - 1);
            adj[v - 1].push_back(u - 1);
        }  
  
        bool blog = false;  
        for (int i = 0; i < n && !blog; ++i) {  
            if (!vis[i]) {  
                if (dfs(i, 'B')) {  
                    blog = true;  
                    break;  
                }  
            }  
        }  
  
        if (blog) {  
            for (int i = 0; i < n; ++i) {  
                cout << ans[i];  
            }  
            cout << endl;  
        } else {  
            cout << "-1" << endl;  
        }  
    }  
  
    return 0;  
}