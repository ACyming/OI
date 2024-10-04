#include <bits/stdc++.h>
using namespace std;
int l1, nxt[(int)1e7 + 1];
char a[(int)1e7 + 1], b[(int)1e7 + 1], l2;
void getnext() {
    int j = 0;
    for (int i = 1; i < l1; ++i) {
        while (j && a[i] != a[j])
            j = nxt[j - 1];
        if (a[i] == a[j])
            j++;
        nxt[i] = j;
        cout << nxt[i] << " ";
    }
}
int main() {
    cin >> a;
    l1 = strlen(a);
    getnext();
    return 0;
    cout << l1 - nxt[l1 - 1];
}