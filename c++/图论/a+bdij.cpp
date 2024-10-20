#include <bits/stdc++.h>
using namespace std;
const long long N = 99999, M = 999999;
typedef pair<long long, long long> PII;
priority_queue<PII, vector<PII>, greater<PII> > q;
long long n, p, c, k, x, y, l;
long long pre[N];//链表头
long long d[N];//dis距离数组
bool f[N];//标记数组
struct Node {
	long long v, next, len;//链式前向星
} a[M * 2];
void add(long long u, long long v, long long len) {
	a[++k] = {v, pre[u], len};
	pre[u] = k;
}//建边
int dijkstra(long long h) {
	d[h] = 0;
	q.push({0, h});
	while (!q.empty()) {
		PII b = q.top();
		long long dis = b.first;
		long long pi = b.second;
		q.pop();
		if (f[pi]) continue;
		f[pi] = true;
		for (long long i = pre[pi]; i; i = a[i].next) {
			long long to = a[i].v;
			if (d[to] > dis + a[i].len) {
				d[to] = dis + a[i].len;
				q.push({d[to], to});
			}
		}
	}
	return d[3];
}//dijstra堆优化
int main() {
	//全开longlong防止数据爆掉
	cin >> x >> y; //读入x,y;
	//使用链式前向星进行建图
	add(1, 2, x);
	add(2, 3, y);
	memset(d, 0x3f, sizeof(d));
	memset(f, 0, sizeof(f));
	cout << dijkstra(1); //开始跑dijstra堆优化
	return 0;
}
