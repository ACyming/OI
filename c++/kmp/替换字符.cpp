#include <bits/stdc++.h>
using namespace std;
string a;
char b;
int main()
{
    getline(cin, a);
    cin >> b;
    for (int i = 0; i < a.size(); i++) {
        if ((i + 1) % 2 != 0) {
            a[i] = b;
        }
    }
    cout << a;
    return 0;
}
