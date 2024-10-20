#include <bits/stdc++.h>
using namespace std;
string s = "wbwbwwbwbwbw", ss = "wbwbwwbwbwbw";
int w, b;
int main()
{

    cin >> w >> b;
    for (int i = 1; i <= 10024; i++)
        s = s + ss;
    for (int i = 0; i < s.size(); i++) {
        ss = s.substr(i, w + b);
        // cout << ss << endl;
        int x = 0, y = 0;
        for (int j = 0; j < ss.size(); j++) {
            if (ss[j] == 'w')
                x++;
            else if (ss[j] == 'b')
                y++;
        }
        // cout << x << " " << y;
        if (x == w && y == b)
            cout << "Yes", exit(0);
    }
    cout << "No";
    return 0;
}