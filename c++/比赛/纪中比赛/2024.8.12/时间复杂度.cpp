#include <bits/stdc++.h>
using namespace std;
struct Node {
    char b;
    int c;
} in;
int T, l, t[200];
stack<Node> zhan;
string s1, s2, s;
char a;
int main() {
	 freopen("complexity.in", "r", stdin);
	 freopen("complexity.out", "w", stdout);
    cin >> T;
    while (T--) {
        while (zhan.empty() == 0)
            zhan.pop();
        memset(t, 0, sizeof t);
        int n = 0, maxx = -0x3f3f3f3f, f = 0, e = 0, flag = 0;
        cin >> l >> s;
        for (int i = 1; i <= l; i++) {
            cin >> a;
            if (a == 'F') {
                f++;
                cin >> in.b >> s1 >> s2;
                in.c = 0;
                if (t[in.b] == 1 || flag == 1) {
                    flag = 1;
                    continue;
                }
                t[in.b] = 1;
                if (flag == 2) {
                    zhan.push(in);
                    continue;
                }
                if (s1 == "n" && s2 == "n") {
                    zhan.push(in);
                    continue;
                }
                if (s1 != "n" && s2 == "n") {
                    n++;
                    maxx = max(maxx, n);
                    in.c = 1;
                    zhan.push(in);
                    continue;
                }
                if (s1 == "n" && s2 != "n") {
                    in.c = 3;
                    flag = 2;
                    zhan.push(in);
                    continue;
                }
                if (s1 != "n" && s2 != "n") {
                    if (s1.size() > s2.size()) {
                        in.c = 3;
                        flag = 2;
                        zhan.push(in);
                        continue;
                    }
                    if (s1.size() < s2.size()) {
                        zhan.push(in);
                        continue;
                    }
                    if (s1.size() == s2.size()) {
                        if (s1 > s2) {
                            in.c = 3;
                            flag = 2;
                            zhan.push(in);
                            continue;
                        } else {
                            zhan.push(in);
                            continue;
                        }
                    }
                }
            } else {
                e++;
                if (flag == 1)
                    continue;
                if (!zhan.empty()) {
                    if (zhan.top().c == 1)
                        n--;
                    if (zhan.top().c == 3)
                        flag = 0;
                    t[zhan.top().b]--;
                    zhan.pop();
                } else
                    flag = 1;
            }
        }
        if (flag == 1 || f != e) {
            cout << "ERR" << endl;
            continue;
        }
        if (maxx == -0x3f3f3f3f) {
            if (s == "O(1)")
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
            continue;
        }
        int tmp = 1, sum = 0;
        for (int j = s.size() - 2; j >= 0; j--) {
            if (s[j] == '^')
                break;
            sum += (s[j] - '0') * tmp;
            tmp *= 10;
        }
        if (sum == maxx)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}