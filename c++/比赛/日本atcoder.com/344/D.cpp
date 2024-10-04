#include <bits/stdc++.h>
#define int long long
using namespace std;
string t;
int n;
struct Node {
    int a, s[12];
} o[120];
int f[120];
main()
{
    cin >> t;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> o[i].a;
        for (int j = 1; j <= o[i].a; j++)
            cin >> o[i].s[j];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= o[i].a; j++){
            
        }
    }
    return 0;
}