#include <bits/stdc++.h>
using namespace std;
string a, b;
int cnt,ans;
struct Node {
    string from, to;
} rule[20];
map<string, int> d[2];
queue<string> q[2];
bool pd(int k) {
    string s = q[k].front();
    if (d[k][s] >= 10) {
        cout << "NO ANSWER!";
        exit(0);
    }
    for (int i = 1; i <= cnt; i++) {
        string from = rule[i].from, to = rule[i].to;
        if (k == 1)
            swap(from, to);
        int fi = s.find(from);
        if (fi != -1) {
            int len = from.size();
            for (int j = 0; j < s.size(); j++) {
                if (s.substr(j, len) == from) {
                    string ss = s.substr(0, j) + to + s.substr(j + len);
                    if (!d[k].count(ss)) {
                        q[k].push(ss);
                        d[k][ss] = d[k][s] + 1;
                        if (d[!k].count(ss) == 1 && d[!k][ss] + d[k][ss] <= 10) {
                            cout << d[!k][ss] + d[k][ss];
                            return 1;
                        }
                    }
                }
            }
        }
    }
     q[k].pop();
    return 0;
}
void bfs() {
    d[0][a] = d[1][b] = 0;
    q[0].push(a);
    q[1].push(b);
    while (!q[0].empty() && !q[1].empty()) {
        if (q[0].size() < q[1].size()) {
            if (pd(0))
                exit(0);
        } else {
            if (pd(1))
               exit(0);
        }
    }
}
int main() {
    cin >> a >> b;
    string xx, yy;
    while (cin >> xx >> yy)
        rule[++cnt] = {xx, yy};
    if (a == b) {
        cout << 0;
        return 0;
    }
    bfs();
    cout << "NO ANSWER!";
    return 0;
}