## 题目大意

矩阵中的每个单元格可以是空的（用 `.` 表示），或者被狐狸（用 `F` 表示）或兔子（用 `R` 表示）覆盖。\
我们需要找出至少有多少只动物走过，这意味着我们需要计算不同动物痕迹的最小数量。

## 解题思路

我们可以**理解题目为两种动物轮流走**。

因为我们为了求动物只数尽量少，我们应该**先确定哪种动物最后走**（因为给出的是所有动物走完后的图像）。

**从左上角找联通块，那么这就是最后一只动物走的足迹**。如样例 1 最后走的是狐狸。

为了保证答案最优，**找到联通块之后，把它设置为另一个动物走过的印记**，代表最后一只动物覆盖了倒数第二只动物的足迹，再找联通块，直到找到了倒数第二只动物的足迹，以此类推。

**如下样例**

```
FFR.....    
.FRRR...      
.FFFFF..
..RRRFFR      
.....FFF
```

**处理后**

```
RRR.....
.RRRR...
.RRRRR..
..RRRRRR
.....RRR
```

不理解的可以看代码理解。

## 代码

```cpp
#include <bits/stdc++.h>
using namespace std;
const int N = 4e3 + 10;
int n, m, ans, mp[N][N];
bool vis[N][N];
int dx[] = {0, 0, 0, -1, 1}, dy[] = {0, 1, -1, 0, 0};//方向数组。
queue<pair<int, int> > q[2];//开两个队列，分别表示 F 和 R。
bool bfs(int s) {
    bool fl = 0;
    while (!q[s].empty()) {
        int x = q[s].front().first, y = q[s].front().second;
        q[s].pop();//基本的 BFS 操作。
        for (int i = 1; i <= 4; i++) {
            int xx = x + dx[i], yy = y + dy[i];
            if (xx > 0 && xx <= n && yy > 0 && yy <= m && mp[xx][yy] &&
                !vis[xx][yy]) {
                vis[xx][yy] = 1;
                if (mp[x][y] == mp[xx][yy])//两个点一样。
                    q[s].push(make_pair(xx, yy));//直接推进去。
                else {//不一样
                    q[!s].push(make_pair(xx, yy));//取反。
                    fl = 1;//标记还找不找得到不同的脚印。
                }
            }
        }
    }
    return fl;
}
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            char c;
            cin >> c;
            mp[i][j] = (c == 'R' ? 1 : ((c == 'F') ? 2 : 0));  // 极品三目运算符， 转换为数字方便BFS。
        }
    q[0].push(make_pair(1, 1));
    vis[1][1] = 1;
    /*初始化*/
    for (int i = 0; bfs(i); i = !i, ans++);
    cout << ans + 1;//答案记得加一，BFS统计的是倒数第2个脚印。
    return 0;
}

```
