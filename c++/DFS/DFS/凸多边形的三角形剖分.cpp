#include <bits/stdc++.h>
using namespace std;
int n;
int ans, bz[1000000];
void dfs(int x, int y) {
    if (!bz[x]) {
        ans++;
        bz[x] = 1;
    }
}
int main() {
    cin >> n;
    dfs(0, n);
    return 0;
}