#include <bits/stdc++.h>
using namespace std;
int n;
int a[int(2 * 1e5 + 10)];
string s;
int q;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        s = s + char(a[i] + 48);
    }
    cin >> q;
    for (int i = 1; i <= q; i++) {
        int x, y, z;
        cin >> x;
        if (x == 1) {
            cin >> y >> z;
            int fi = s.find(char(y + 48));
            while (fi != -1) {
                string ss = "";
                ss += char(z + 48);
                s.insert(fi + 1, ss);
                fi = s.find(char(y + 48), fi + 2);
            }
        } else {
            cin >> y;
            int fi = s.find(char(y + 48));
            while (fi != -1) {
                s.erase(fi, 1);
                fi = s.find(char(y + 48), fi + 1);
            }
        }
        // cout << endl
        //      << s << endl;
    }
    for (int i = 0; i < s.size(); i++)
        cout << s[i] << " ";
    return 0;
}