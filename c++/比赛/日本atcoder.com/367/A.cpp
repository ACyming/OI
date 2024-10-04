#include <bits/stdc++.h>
using namespace std;
int a, b, c, cnt;
bool bz[30];
int main() {
    cin >> a >> b >> c;
    int now = b;
    while (now != c) {
        if (now >= 24)
            now = 0;
        bz[now] = 1;
        now++;
        cnt++;
        if (cnt >= 48)
            break;
    }
    if (cnt == 48)
        cout << "Yes";
    else if (bz[a])
        cout << "No";
    else
        cout << "Yes";
    return 0;
}