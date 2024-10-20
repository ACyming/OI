#include <bits/stdc++.h>
using namespace std;
long long a, b, n;
int main() {
    cin >> n;
    while (n--) {
        cin >> a >> b;
        if (a > b)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
    return 0;
}