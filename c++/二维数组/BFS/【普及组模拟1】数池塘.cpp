#include<iostream>
using namespace std;
char mp[100][100];
int d[1000][3],n,m,cnt;
int dx[8]={-1,1,0,0,-1,-1,1,1};
int dy[8]={0,0,-1,1,-1,1,-1,1};
void bfs(int x,int y)
{
	int head=0,tail=1,xx,yy;
	mp[x][y]='.';
	d[1][1]=x;
	d[1][2]=y;
	do
	{
		head++;
		for(int i=1;i<8;i++)
		{
			xx=d[head][1]+dx[i];
			yy=d[head][2]+dy[i];
			if(mp[xx][yy]=='W')
			{
				tail++;
				d[tail][1]=xx;
				d[tail][2]=yy;
				mp[xx][yy]='.';
			}
		}
	}while(head<=tail);
}
int main()
{
	int ans;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>mp[i][j];
		}
	}
	for(int i=1;i<=n;i++) 
	{
		for(int j=1;j<=m;j++)
		{
			if(mp[i][j]=='W')
			{
				mp[i][j]='.';
				bfs(i,j);
				ans++;
			}
		}
	}
	cout<<ans;
}
