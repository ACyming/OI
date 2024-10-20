#include<cstdio>
using namespace std;
int minn=999999,n=5;
int lx[4]={-1,0,1,0};
int ly[4]={0,-1,0,1};
int map[10][10];
int ans[30][5];
void dfs(int x,int y,int t)
{
	if(t>minn) return;
	if(x==n&&y==n)
	{
		if(t<minn) minn=t;
		return;
	}
	for(int i=0;i<4;i++)
	{
		int xx=lx[i]+x;
		int yy=ly[i]+y;
		if(xx>=1&&xx<=5&&yy>=1&&yy<=5&&map[xx][yy]==0)
		{
		// 	printf("(%d,%d)\n",x,y);
			map[x][y]=1;
			ans[t][1]=x;
			ans[t][2]=y;
			dfs(xx,yy,t+1);
			map[x][y]=0;
		}
	}
}
int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			scanf("%d",&map[i][j]);
		}
	}
	dfs(1,1,1);
	for(int i=1;i<minn;i++)
	{
		printf("(%d,%d)\n",ans[i][1]-1,ans[i][2]-1);
	}
	printf("(4,4)");
	return 0;
}
