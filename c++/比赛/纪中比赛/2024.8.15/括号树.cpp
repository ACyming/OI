#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 5e5 + 5;
int n;
struct Node {
    int v, nxt;
} edge[N];
int head[N], k, fa[N], f[N], ans, last[N], line[N];
char s[N];
main() {
    // freopen("brackets.in", "r", stdin);
    // freopen("brackets.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    for (int i = 2; i <= n; i++)
        cin >> fa[i];
    for (int i = 1; i <= n; i++) {
        int father = fa[i];
        f[i] = f[father], last[i] = last[father];
        if (s[i] == '(')
            last[i] = i;
        else if (s[i] == ')' && last[i]) {
            line[i] = line[fa[last[i]]] + 1;
            last[i] = last[fa[last[i]]];
            f[i] += line[i];
        }
        ans ^= i * f[i];
    }
    cout << ans;
    return 0;
}