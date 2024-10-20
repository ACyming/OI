#include <bits/stdc++.h>
using namespace std;
int a, b;
int main()
{
    cin >> a >> b;
    for (int i = 1;; i++) {
        if (i != a + b) {
            cout << i;
            return;
        }
    }
    return 0;
}