#include <bits/stdc++.h>
using namespace std;
long long fa[200050];
//bool ans[1000500];
int find(int x) {
	if (x == fa[x]) {
		return x;
	}
	return fa[x] = find(fa[x]);
}
void hb(int x, int y) {
	int xx = find(x);
	int yy = find(y);
	if (xx != yy) {
		fa[xx] = yy;
	}
	return ;
}
int main() {
	int n, m, x, y, k, a, b;
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		fa[i]=i;
	}
	while (m--) {
		cin >> x >> y;	
		fa[a]=find(b);
	}
	cin >> k;
	while (k--) {
		cin >> a >> b;
		if(find(a)==find(b))
			cout<<"Yes";
		else
			cout<<"No";
	}
	return 0;
}
