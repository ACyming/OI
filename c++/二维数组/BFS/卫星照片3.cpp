#include<iostream>
using namespace std;
int head,tail,t[1000][3],ans;
char a[1000][1000];
int dx[5]={0,1,0,-1,0},dy[5]={0,0,1,0,-1};
int xx,yy;
int go(int x,int y)
{
	head=0;tail=1;
	t[1][1]=x;
	t[1][2]=y;
	a[x][y]=1;
	do
	{
		head++;
		for(int i=1;i<=4;i++)
		{
			xx=t[head][1]+dx[i];
			yy=t[head][2]+dy[i];
			if(xx>0&&xx<=10&&yy>0&&yy<=10&&a[xx][yy]=='.')
			{
				tail++;
				t[tail][1]=xx;
				t[tail][2]=yy;
				a[xx][yy]=1;
			}
		}
	}while(head<tail);
	return tail;
}
int main()
{
	int n,m;
	cin>>n>>m; 
	while(1)
	{
		for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>a[i][j];
		for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(a[i][j]=='.') go(i,j);
			else break;
		for(int i=1;i<=n;i++)
		for(int j=10;j>=m;j--)
			if(a[i][j]=='.') go(i,j);
			else break;
		for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(a[i][j]=='.') ans+=go(i,j);
	}
	cout<<ans;
		
}
