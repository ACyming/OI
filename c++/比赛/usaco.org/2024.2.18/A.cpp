#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
string x;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (x[x.size() - 1] == '0') {
            cout << "E" << endl;
            continue;
        } else {
            cout << "B" << endl;
            continue;
        }
    }
    return 0;
}