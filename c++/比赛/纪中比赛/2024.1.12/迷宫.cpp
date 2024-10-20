#include<bits/stdc++.h>
using namespace std;
int n,m,ans,d[100000][2];
int dx[5]= {0,1,0,-1,0};
int dy[5]= {0,0,1,0,-1};
char a[220][220];
void bfs() {
	int head=0,tail=1;
	while(head<tail) {
		head++;
		for(int i=1; i<=4; i++) {
			int xx=d[head][0]+dx[i];
			int	 yy=d[head][1]+dy[i];
			if(xx>=1&&xx<=n&&yy>=1&&yy<=m&&a[xx][yy]!='#') {
				tail++;
				d[tail][0]=xx;
				d[tail][1]=yy;
				if(a[xx][yy]=='*') {
					ans++;
				}
				a[xx][yy]='#';
			}
		}
	}
}
int main() {
	freopen("maze.in", "r", stdin);
	freopen("maze.out", "w", stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			cin>>a[i][j];
			if(a[i][j]=='S') {
				d[1][0]=i;
				d[1][1]=j;
			}
		}
	}
	bfs();
	cout<<ans;
	return 0;
}
