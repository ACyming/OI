#include<bits/stdc++.h>
using namespace std;
const int N=1020;
int g[N][N],head[N];
int n,m;
int fa[N];
int mx=-999,my=-999;
int c,ans;
struct Node {
	int u,v,w;
} a[N];
void add(int x,int y,int len) {
	a[++c]= {x,y,len};
	head[x]=c;
}
bool cmp(Node aa,Node bb) {
	return aa.w<bb.w;
}
int dx[5]= {0,1,-1,0,0};
int dy[5]= {0,0,0,1,-1};
void aadd() {
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			for(int k=1; k<=4; k++) {
				if(g[i][j]==0) {
					if(dy[i]==0)
						add(i+dx[k],j+dy[k],1);
					else
						add(i+dx[k],j+dy[k],2);
					g[i][j]=1;
				}
			}
		}
	}
}
int find(int x) {
	if (x == fa[x]) {
		return x;
	}
	return fa[x] = find(fa[x]);
}
int main() {
	cin>>n>>m;
	int x1,y1,x2,y2;
	while(cin>>x1>>y1>>x2>>y2){
		g[x1][y1]=g[x2][y2]=g[y1][x1]=g[y2][x2]=1;
		add(x1,y1,0);
		add(y1,x1,0);
		add(x2,y2,0);
		add(y2,x2,0);
	}
	aadd();
	for (int i = 1; i <= n; i++)
		fa[i] = i;
	int tot=0;
	sort(a+1,a+1+m,cmp);
	for (int i=1; i<=m; i++) {
		int fau=find(a[i].u);
		int fav=find(a[i].v);
		if (fau!=fav) {
			tot++;
			fa[fau]=fav;
			ans+=a[i].w;
			if (tot==n-1) {
				break;
			}
		}
	}
	cout<<ans;
	return 0;
}
