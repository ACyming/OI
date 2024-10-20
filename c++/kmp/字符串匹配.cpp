#include <bits/stdc++.h>
using namespace std;
int n, m;
int nxt[100020];
char s[100020], t[100020];
int main() {
    cin >> n >> m >> s >> t;
    int j = 0;
    for (int i = 1 /*i:枚举结束点*/; i < m; ++i) {
        // j:截取前j个字符
        while (j && t[i] != t[j] /*如果t[i]与t[j]匹配退出*/)
            j = nxt[j - 1]; // 更新至f[j-1](kmp公式)
        if (t[i] == t[j])   // 如果t[i]与t[j]匹配，看下一位
            j++;
        nxt[i] = j; // 记录
    }
    j = 0;
    for (int i = 0; i < n; ++i) {
        while (j && s[i] != t[j])
            j = nxt[j - 1]; // 同上
        if (s[i] == t[j])
            j++; // 同上
        if (j == m) {
            cout << i - m + 2 /*原本要加1，下标是0，所以再加1，即：+2*/ << endl;
            j = nxt[j - 1]; // 进行下一次寻找
        }
    }

    return 0;
}