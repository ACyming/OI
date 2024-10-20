#include <bits/stdc++.h>
using namespace std;
string a, b;
int n;
int main()
{
    cin >> a >> b;
    cin >> n;
    b.insert(n, a);
    cout << b;
    return 0;
}
