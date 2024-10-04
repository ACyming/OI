#include <bits/stdc++.h>
using namespace std;
int w[3], c[3], t[3];
int main() {
    cin >> w[1] >> c[1] >> t[1];
    cin >> w[2] >> c[2] >> t[2];
    if (w[1] > w[2])
        cout << "A";
    else if (w[1] < w[2])
        cout << "B";
    else {
        if(c[1] > c[2]) cout << "A";
        else if(c[1] < c[2]) cout << "B";
        else {
            if(t[1] < t[2]) cout << "A";
            else cout << "B";
        }
    }
    return 0;
}