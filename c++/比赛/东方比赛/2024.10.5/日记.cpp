#include <bits/stdc++.h>
using namespace std;
int m, d, s;
char t;
int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main() {
    cin >> m >> t >> d;
    if (m == 0) {
        m = 1;
        s ++;
    }
    if (m > 12) {
        if (m / 10 == 1)
            m = 12;
        else {
            if (m % 10 == 2)
                m = 12;
            else
                m = (m - 1) % 10 + 1;
        }
        s++;
    }
    if (month[m] < d || d <= 0)
        s++;
    cout << s;
    return 0;
}