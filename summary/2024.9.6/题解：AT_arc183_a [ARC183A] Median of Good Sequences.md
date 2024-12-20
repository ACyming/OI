## 题意

给出正整数 $n$ 和 $k$，定义一个长度为 $n \times k$，由 $1 \thicksim n$ 组成的字符串，当 $1 \thicksim n$ 中每个数出现的次数为 $k$，那么这个字符串就为“好串”，令 $s$ 为好串的个数，问按字典序升序排列后第 $\lceil \frac{s}{2} \rceil$ 个“好串” 是什么？

## 解题思路

首先我们可以想到：\
先打一个全排列枚举每一个“好串”，然后输出即可。但是我们发现，我们的全排列时间复杂度为 $\mathcal O(n^{nk})$，肯定过不了，于是我们用它打表找规律。

| $n/k$ | 1   | 2   | 3   | 4   | 5   | 6   |
| --- | --- | --- | --- | --- | --- | --- |
| $1$ | $1$ | $1,2$ | $2,1,3$ | $2,4,3,1$ | $3,2,5,4,1$ | $3,6,5,4,2,1$ |
| $2$ | $1,1$ | $1,2,2,1$ | $2,2,1,3,3,1$ | $2,4,4,3,3,2,1,1$ | $3,3,2,5,5,4,4,2,1,1$ | $3,6,6,5,5,4,4,3,2,2,1,1$ |
| $3$ | $1,1,1$ | $1,2,2,2,1,1$ | $2,2,2,1,3,3,3,1,1$ | $2,4,4,3,3,2,1,1$ | /   | /   |
| $4$ | $1,1,1,1$ | $1,2,2,2,2,1,1,1$ | $2,2,2,2,1,3,3,3,3,1,1,1$ | /   | /   | /   |
| $5$ | $1,1,1,1,1$ | $1,2,2,2,2,2,1,1,1,1$ | /   | /   | /   | /   |
| $6$ | $1,1,1,1,1,1$ | $1,2,2,2,2,2,2,1,1,1,1,1$ | /   | /   | /   | /   |

（斜杠：递归次数过多，打不出来）。

我们可以发现 $n$ 的奇偶性会导致答案发生变化，所以我们分开讨论。

对于 $n=1$ 的情况，直接特判。

当 $n$ 为奇数且 $n>1$ 时，当 $k=1$ 时，我们发现答案的前两个数分别为 $\lceil \frac n2\rceil$ 和 $\lfloor\frac n2\rfloor$, 而剩下的数就是 $1\sim n$ 中除了这两个数以外降序的结果。对于 $k>1$ 的情况，可以发现除了第二个数之外的其它数都重复了 $k$ 次，并且第二个数会在 $k=1$ 的答案序列中下标为 $\lceil \frac n2\rceil+1$ 和 $\lceil \frac n2\rceil+2$ 中间的位置重复 $k-1$ 次。

当 $n$ 为偶数时，若 $k=1$，此时答案的第一个数就为 $\frac n2$, 剩下的数就是 $1\sim n$ 中除了这个数以外降序的结果。再看对于 $k>1$ 的情况，除了第一个数之外的其它数都重复了 $k$ 次，而第一个数会在原来 $k=1$ 的答案序列中下表为 $\frac n2 + 1$ 和 $\frac n2+2$ 中间的位置同样重复 $k-1$ 次。

## 参考代码

```cpp
#include <bits/stdc++.h>
using namespace std;
int n, k;
int main() {
    cin >> n >> k;
    vector<int> ans(n * k + 1);
    if (n == 1) {//特判
        while (k--)
            cout << 1 << " ";
        return 0;
    }
    if (n % 2 == 1) {
        ans[1] = ceil(n * 1.0 / 2);//解题思路
        ans[2] = n / 2;
        int now = 3;
        for (int i = n; i >= 1; i--) {
            if (i != ans[1] && i != ans[2]) {
                ans[now] = i;
                now++;
            }
        }//先将 k = 1 的情况打出来
        if (k != 1)//如果k 不等于 1
            ans.insert(ans.begin() + 2 + ceil(n * 1.0 / 2), ans[2]);//插入第二个数到指定位置
        for (int i = 1; i <= n + 1/*插入了一个数，所以 n + 1*/; i++) {
            if (i != 2) {
                if (i != ceil(n * 1.0 / 2) + 2) {//特判，不然被插入的数会输出多一次
                    for (int j = 1; j <= k - 1; j++)
                        if (ans[i])//保证ans[i]有数，不然会wa，别问我怎么知道的......
                            cout << ans[i] << " ";
                } else {
                    for (int j = 1; j <= k - 2; j++)
                        if (ans[i])
                            cout << ans[i] << " ";
                }
            }
            if (ans[i])
                cout << ans[i] << " ";
        }
    } else {
        //同上
        ans[1] = n / 2;
        int now = 2;
        for (int i = n; i >= 1; i--) {
            if (i != ans[1]) {
                ans[now] = i;
                now++;
            }
        }
        if (k != 1)
            ans.insert(ans.begin() + 2 + n * 1.0 / 2, ans[1]);
        for (int i = 1; i <= n + 1; i++) {
            if (i != 1) {
                if (i != n * 1.0 / 2 + 2) {
                    for (int j = 1; j <= k - 1; j++)
                        if (ans[i])
                            cout << ans[i] << " ";
                } else
                    for (int j = 1; j <= k - 2; j++)
                        if (ans[i])
                            cout << ans[i] << " ";
            }
            if (ans[i])
                cout << ans[i] << " ";
        }
    }
    return 0;
}
```