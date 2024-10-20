#include <bits/stdc++.h>
#define wan_jie_sa_hua return 0
using namespace std;
const long long N = 1e6+200;
long long  n, m, p[N], father[N];
long long ans = -1, cnt;
struct Node {
	long long u, v, w;
} a[N];
bool cmp(Node aa, Node bb) {
	return aa.w > bb.w;
}
int find(long long x) {
	if (x == father[x]) {
		return x;
	}
	return father[x] = find(father[x]);
}
int main() {
	cin >> n >> m;
	for (long long i = 1; i <= n; i++) {
		father[i] = i;
		cin >> p[i];
	}
	for (long long i = 1; i <= m; i++) {
		cin >> a[i].u >> a[i].v >> a[i].w;
	}
	sort(a + 1, a + 1 + m, cmp);
	long long xx,yy;
	for (long long i = 1; i <= m; i++) {
		while (find(cnt) == find(p[cnt])) {
			cnt++;
			if (cnt == n) {
				cout << ans;
				wan_jie_sa_hua;
			}
		}
		xx = find(a[i].u);
		yy = find(a[i].v);
		if (xx != yy){
			father[xx] = yy;
			ans = a[i].w;
		}
	}
	cout << ans;
	return 0;
}
