#include<bits/stdc++.h>
using namespace std;
inline int read(){
	int x=0,f=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){
		if(ch=='-') f=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9') {
	x=x*10+ch-'0';
	ch=getchar();
}
	return x*f;
}
void write(int x){
	if(x<0){
		putchar('-');
		x=-x;
	}
	if(x>9)
		write(x/10);
	putchar(x%10+'0');
	return;
}
//以上快读快写
int dx[4]={0, 0,1,-1};
int dy[4]={1,-1,0, 0};//方向
int n,m,ans;
int a[4001][4001];
bool vis[4001][4001];
char c[4001];
queue<pair<int,int> >q[2];//q[0]:F q[1]:R

bool bfs(int s) {
	bool fl=0;
	while (!q[s].empty()) {
		int x=q[s].front().first, y=q[s].front().second;
		q[s].pop();
		for(int i=0;i<4;i++) {
			int fx=x+dx[i],fy=y+dy[i];
			if(fx>0&&fx<=n&&fy>0&&fy<=m&&a[fx][fy]&&!vis[fx][fy]){
				vis[fx][fy]=1;
				if(a[x][y]==a[fx][fy]) 
					q[s].push(make_pair(fx,fy));
				else{
					q[!s].push(make_pair(fx,fy));
					fl=1;
				}
			}
		}
	}
	return fl;
}

int main(){
	n=read(),m=read();
	for(int i=1;i<=n;i++){
		scanf("%s",c+1);
		for (int j=1;j<=m;j++){//数字存图
			if(c[j]=='R') a[i][j]=1;
			else if (c[j]=='F') a[i][j]=2;
			else a[i][j]=0;
		}
	}
	q[0].push(make_pair(1,1));
	vis[1][1] = 1;
	for(int i=0;bfs(i);i=!i,ans++);
	write(ans+1);
}
