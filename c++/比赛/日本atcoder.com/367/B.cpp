#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
    cin >> s;
    int tail = s.size() - 1, fi = s.find('.');
    while (s[tail] == '0' || tail - fi > 3)
        tail--;
    for (int i = 0; i <= tail; i++) {
        if (i == tail && s[tail] == '.')
            continue;
        cout << s[i];
    }
    return 0;
}