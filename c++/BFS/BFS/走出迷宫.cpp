#include<iostream>
using namespace std;
int d[81000][3];
char mp[200][200];
int sx,sy,fx,fy,n,m;
int bz[201][201];
int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};
void bfs(int x,int y)
{
	int head=0,tail=1;
	d[1][0]=x;
	d[1][1]=y;
	d[1][2]=0;
	bz[x][y]=1;
	do{
		head++;
	
		for(int i=0;i<=3;i++)
		{
			int xx=d[head][0]+dx[i];
			int yy=d[head][1]+dy[i];
			if(xx>=1&&xx<=n&&yy>=1&&y<=m&&bz[xx][yy]==0&&mp[xx][yy]!='#')
			{
				tail++;
				d[tail][0]=xx;
				d[tail][1]=yy;
				d[tail][2]=d[head][2]+1;
				bz[xx][yy]=1;
				if(xx==fx&&yy==fy)
				{
					cout<<d[tail][2];
					return ;
				}
			}
		}
	}while(head<tail);
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>mp[i][j];
			if(mp[i][j]=='S')
			{
				sx=i;
				sy=j;
			}
			if(mp[i][j]=='T')
			{
				fx=i;
				fy=j;
			}
		}
	}
	bfs(sx,sy);
	return 0;
}
