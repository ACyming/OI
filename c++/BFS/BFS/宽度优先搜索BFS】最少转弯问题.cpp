#include<iostream>
using namespace std;
char mp[100][100];
int d[1000][3],n,m,cnt;
int dx[5]={0,0,1,-1};
int dy[5]={1,-1,0,0};
void bfs(int x,int y,int zx,int zy)
{
	int head=0,tail=1,xx,yy;
	mp[x][y]=0;
	d[1][1]=x;
	d[1][2]=y;
	do
	{
		head++;
		for(int i=0;i<4;i++)
		{
			xx=d[head][1]+dx[i];
			yy=d[head][2]+dy[i];
			while(xx>=1 &&xx<=n && yy>=1 &&yy<=m &&mp[xx][yy]!=0)
			{
				tail++;
				d[tail][1]=xx;
				d[tail][2]=yy;
				mp[xx][yy]=0;
				if(x==zx&&y==zy)
				{
					cout<<d[tail][2];
					head=tail;
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
		}
	}
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	bfs(x1,y1,x2,y2);
}
