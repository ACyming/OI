#include<iostream>
using namespace std;
int mp[900][900];
int d[99000000][3],n,m,cnt;
int dx[5]={0,0,1,-1};
int dy[5]={1,-1,0,0};
void bfs(int x,int y,int zx,int zy)
{
	int head=0,tail=1;
	mp[x][y]=1;
	d[1][0]=x;
	d[1][1]=y;
	d[1][2]=-1;
	do
	{
		head++;
		for(int i=0;i<=3;i++)
		{
			int	xx=d[head][0]+dx[i];
			int yy=d[head][1]+dy[i];
			while(xx>=1&&xx<=n && yy>=1 &&yy<=m &&mp[xx][yy]==0)
			{
				tail++;
				d[tail][0]=xx;
				d[tail][1]=yy;
				d[tail][2]=d[head][2]+1;
				mp[xx][yy]=1;
				if(xx==zx&&yy==zy)
				{
					cout<<d[tail][2];
					head=tail;
				}
				xx=d[tail][0]+dx[i];
				yy=d[tail][1]+dy[i];
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
		}
	}
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	bfs(x1,y1,x2,y2);
}
