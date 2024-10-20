# C++整合笔记

## C++常用公式

```c++
abs(变量,数字)	绝对值	abs(-1)=1

pow(变量1,变量幂)	幂	pow(2,3)=2*2*2=8

sqrt(变量,数字)	平方根	sqrt(9)=3

ceil(变量,数字)	向上取整ceil(3.14)=4

floor(变量,数字)向下取整floor(3.56)=3

__gcd(变量,变量)最大公约数__gcd(20,12)=4

swap(变量,变量)两个变量值呼唤swqp(12,13)=13,12

srand((unsigned int)time(NULL));随机函数 
变量=rand()%数字大+数字小;

海伦公式	//a,b,c,三边边长
p=(a+b+c)/2;
s=sqrt(p*(p-a)*(p-b)*(p-c));

reverse()//反转vector和数组
reserve(s.begin,s.end)//反转string
```



## 动态规划

### 最长不下降子序列

```c++
#include <bits/stdc++.h>
using namespace std;
int n;
int a[999999], dp[999999];
int cnt = 1, ans;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        dp[i] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            if (a[j] <= a[i])
                dp[i] = max(dp[j] + 1, dp[i]);
        }
        ans = max(dp[i], ans);
    }
    cout << ans;
    return 0;
}

```



### 背包问题

#### 0/1背包

**物品数量唯一**

````c++
#include <bits/stdc++.h>
using namespace std;
int n, t;
struct Node {
	int x, y;//x:重量，y:价值
} a[99999999];
int dp[9999999];//重量为i的背包的最大容量
int ans;
int main() {
	cin >> n >> t;
	for (int i = 1; i <= t; i++) {
		cin >> a[i].x >> a[i].y;//输入
	}
	for (int i = 1; i <= t; i++)//枚举物品
		for (int j = n; j >= a[i].x; j--)//枚举背包大小
			dp[j] = max(dp[j - a[i].x]/*背包大小*/ + a[i].y/*加上物品的价值*/, dp[j]/*与自己进行比较*/);
	cout << dp[n];//输出
	return 0;
}
````

#### 完全背包

**物品数量无限**

````c++
#include <bits/stdc++.h>
using namespace std;
int w[10000], c[10000], k, n, dp[10000];
int main() {
	cin >> k >> n;//k->背包大小,n->物品数量
	for (int i = 1; i <= n; i++) {
		cin >> w[i] >> c[i];//w[]->物品重量，c[]->物品价值
	}
	for (int i = 1; i <= n; i++) {
		for (int j = w[i]; j <= k; j++) {//反向循环，达到无限的效果
			dp[j] = max(dp[j], dp[j - w[i]] + c[i]);//同0/1背包
		}
	}
	cout << dp[k];//输出
	return 0;
}
````

#### 多重背包

**物品数量有限**

````c++
#include <bits/stdc++.h>
using namespace std;
int n, t;
struct Node {
	int x, y, z; //x:重量，y:价值
} a[2020];
int dp[2020][520];
int ans;
int main() {
	cin >> t >> n;
	for (int i = 1; i <= t; i++) {
		cin >> a[i].z >> a[i].x >> a[i].y;//a[].z->物品数量
	}
	for (int i = 1; i <= t; i++)//枚举物品
		for (int j = 1; j <= n; j++)//枚举背包大小
			for (int k = 0; k <= a[i].z && k * a[i].x <= j/*防止k*a[].x>j导致负下表*/; k++) {//枚举a[].z个物品
				dp[i][j] = max(dp[i][j]/*对比自己*/, dp[i - 1][j -/*计算物品价值*/ k * a[i].x] + k * a[i].y);
			}
	cout << dp[t][n];//输出
	return 0;
}
````

#### 混合背包

**0/1+完全+多重背包的共生体**

##### 方案一:分类讨论

````c++
#include <bits/stdc++.h>
using namespace std;
#define M 205
#define N 35
int dp[M], w[N], c[N], p[N];
int main() {
	int n, m;
	cin >> m >> n;
	for (int i = 1; i <= n; ++i)
		cin >> w[i] >> c[i] >> p[i];
	for (int i = 1; i <= n; ++i) {
		if (p[i] == 1) { //01背包
			for (int j = m; j >= w[i]; j--)
				dp[j] = max(dp[j], dp[j - w[i]] + c[i]);
		} else if (p[i] == 0) { //完全背包
			for (int j = w[i]; j <= m; ++j)
				dp[j] = max(dp[j], dp[j - w[i]] + c[i]);
		} else { //多重背包
			for (int j = m; j >= w[i]; --j)
				for (int k = 0; k * w[i] <= j && k <= p[i]; ++k)
					dp[j] = max(dp[j], dp[j - k * w[i]] + k * c[i]);
		}
	}
	cout << dp[m];
	return 0;
}
````

##### 方案二：转为多重背包问题

````c++
#include <bits/stdc++.h>
using namespace std;
#define M 205
#define N 35
int dp[M], w[N], c[N], p[N];
int main() {
	int n/*物品数*/, m/*容量*/;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> w[i]/*价格*/ >> c[i]/*重量*/ >> p[i]/*数量*/;
		if (p[i] == 0) //如果第i物品可以取无限个，实际最多可以取m/w[i]个
			p[i] = m / w[i];
	}
	for (int i = 1; i <= n; ++i) //多重背包	枚举物品
		for (int j = m; j >= w[i]; --j) //枚举钱大小
			for (int k = 0; k * w[i] <= j && k <= p[i]; ++k)//枚举背包大小
				dp[j] = max(dp[j], dp[j - k * w[i]] + k * c[i]);
	cout << dp[m];
	return 0;
}

````

## 高精度

### 高精度加法

#### 朴素

```c++
#include<iostream>
#include<string>
using namespace std;
int a[1520], b[1520], c[1520];
string s1;
string s2;
int main() {
	cin >> s1;
	cin >> s2;
	for (int i = 0; i < s1.size(); i ++)
	{
		a[s1.size()-1 - i] = s1[i] - '0';
	}
	for (int i = 0; i < s2.size(); i ++)
	{
		b[s2.size()-1 - i] = s2[i] - '0';
	}
	int ans = max(s1.size(), s2.size());
	for (int i = 0; i < ans; i ++) {
		c[i] += a[i] + b[i];
		c[i+1] = c[i] / 10;
		c[i] %= 10;
	}
	ans++;
	if (c[ans-1] == 0 && ans > 1)
		ans -= 1;
	for (int i = 0; i < ans; i ++)
		cout << c[ans-1-i];
	return 0;
}

```

#### 重载运算符

```c++
#include <bits/stdc++.h>
using namespace std;
struct Node {
	int a[100000];
	Node() {
		memset(a, 0, sizeof(a));
	}
	void inn(string x) {
		int len = x.size();
		for (long long i = 1; i <= len; i++) {
			a[i] = x[len - i] - '0';
		}
		a[0] = len;
		return ;
	}
	Node operator+(Node &y) {
		Node tmp;
		tmp.a[0] = max(a[0], y.a[0]);
		for (int i = 1; i <= tmp.a[0]; i++) {
			tmp.a[i] += a[i] + y.a[i];
			tmp.a[i + 1] = tmp.a[i] / 10;
			tmp.a[i] %= 10;
		}
		return tmp;
	}
} n1, n2, n3;
string a, b;
int main() {
	cin >> a;
	char c;
	cin >> c;
	cin >> b;
	n1.inn(a);
	n2.inn(b);
	if (c == '+')
		n3 = n1 + n2;
	for (int i = n3.a[0]; i >= 1; i--) {
		cout << n3.a[i];
	}
	return 0;
}
```

### 高精度减法

```c++
#include <bits/stdc++.h>
using namespace std;
char s1[999999], s2[999999], s3[999999],n[999999];
int a[999999], b[999999], c[999999], l1, l2, l3, i;
int main() {
	scanf("%s", s1);
	scanf("%s", s2);
	if (strlen(s1) < strlen(s2) || strlen(s1) == strlen(s2) && strcmp(s1, s2) < 0) {
		strcpy(n,s1);
		strcpy(s1,s2);
		strcpy(s2,n);
		cout << "-";
	}
	l1 = strlen(s1);
	l2 = strlen(s2);
	for (i = 0; i <= l1 - 1; i++)
		a[l1 - i] = s1[i] - 48;
	for (i = 0; i <= l2 - 1; i++)
		b[l2 - i] = s2[i] - 48;
	i = 1;
	while (i <= l1 || i < l2) {
		if (a[i] < b[i]) {
			a[i] += 10;
			a[i + 1]--;
		}
		c[i] = a[i] - b[i];
		i++;
	}
	l3 = i;
	while (c[l3] == 0 && l3 > 1)
		l3--;
	for (i = l3; i >= 1; i--)
		cout << c[i];
	return 0;
}

```



### 高精度乘法

```c++
#include <bits/stdc++.h>
using namespace std;
char s1[101], s2[101], s3[101];
int a[101], b[101], c[100001], len1, len2, len3, x;
int main() {
	scanf("%s", s1);
	scanf("%s", s2);
	len1 = strlen(s1);
	len2 = strlen(s2);
	for (int i = 0; i <= len1 - 1; i++)
		a[len1 - i] = s1[i] - 48;
	for (int i = 0; i <= len2 - 1; i++)
		b[len2 - i] = s2[i] - 48;
	for (int i = 1; i <= len1; i++) {
		x = 0;
		for (int j = 1; j <= len2; j++) {
			c[i + j - 1] = a[i] * b[j] + x + c[i + j - 1];
			x = c[i + j - 1] / 10;
			c[i + j - 1] %= 10;
		}
		c[i + len2] = x;
	}
	len3 = len1 + len2;
	while (c[len3] == 0 && len3 > 1)
		len3--;
	for (int i = len3; i >= 1; i--) {
		cout << c[i];
	}
	return 0;
}
```

## 最短路算法全集

### SPFA链式前向星

**时间复杂度：O(KE),最坏：O(VE)约等于N^3**

```c++
queue<int> q;
void SPFA() {
	in[1] = 1;
	dis[1] = 0;
	q.push(1);
	while (!q.empty()) {
		int  u = q.front();
		q.pop();
		in[u] = 0;
		for (int  i = head[u]; i; i = g[i].nxt) {
			int  v = g[i].v;
			if (dis[u] + g[i].len < dis[v]) {
				dis[v] = dis[u] + g[i].len;
				if (!in[v]) {
					in[v] = 1;
					q.push(v);
				}
			}//
		}
	}
}
```



### floyd

**时间复杂度：O(n^3)**

```c++
for (int k = 1; k <= n; k++)
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
            g[i][j]=min(g[i][j],g[i][k]+g[k][i]);
```

### dijstra

**朴素：O(n^2)**

**堆优化：O(nlogn)**

```c++
typedef pair<int, int> PII;
priority_queue<PII, vector<PII>, greater<PII> > q;
memset(d, 0x3f, sizeof(d));
memset(f, 0, sizeof(f));
d[h] = 0;
q.push({0, h});
while (!q.empty()) {
	PII b = q.top();
	int dis = b.first;
	int pi = b.second;
	q.pop();
	if (f[pi]) continue;
	f[pi] = true;
	for (int i = pre[pi]; i; i = a[i].next) {
		int to = a[i].v;
		if (d[to] > dis + a[i].len) {
			d[to] = dis + a[i].len;
			q.push({d[to], to});
		}
	}
}


```

