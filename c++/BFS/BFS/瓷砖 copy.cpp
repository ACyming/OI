#include<iostream>
using namespace std;
int d[10005][3];
char mp[201][201];
int sx,sy,fx,fy,n,m,ans;
int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};
void bfs(int x,int y)
{
	int head=0,tail=1;
	d[1][0]=x;
	d[1][1]=y;
	mp[x][y]='#';
	do{
		head++;
		for(int i=0;i<=3;i++)
		{
			int xx=d[head][0]+dx[i];
			int yy=d[head][1]+dy[i];
			if(xx>=1&&xx<=m&&yy>=1&&yy<=n&&mp[xx][yy]!='#')
			{
				tail++;
				d[tail][0]=xx;
				d[tail][1]=yy;	
				mp[xx][yy]='#';			
			}
		}
	}while(head<tail);
	ans=tail;
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>mp[i][j];
			if(mp[i][j]=='@')
			{
				sx=i;
				sy=j;
			}
		}
	}
	bfs(sx,sy);
	cout<<ans;
}
