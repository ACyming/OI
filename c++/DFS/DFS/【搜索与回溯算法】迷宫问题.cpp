#include<cstdio>
using namespace std;
int ans,n,xx,yy,dx[8]={-1,-1,0,1,1,1,0,-1},dy[8]={0,1,1,1,0,-1,-1,-1},map[1005][1005];
void dfs(int x,int y)
{
	if(x==1&&y==n)
	{
		ans++;
		return;
	}
	for(int i=0;i<8;i++)
	{
		xx=x+dx[i];
		yy=y+dy[i];
		if(map[xx][yy]==0&&xx<=n&&xx>=1&&yy<=n&&yy>=1)
		{
			map[x][y]=1;
			dfs(xx,yy);
			map[x][y]=0;
		}
	}
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d",&map[i][j]);
		}
	}
	dfs(1,1);
	printf("%d",ans);
}
/*0 1 0 1 0 1 0 1 0 1
  1 0 1 0 1 0 1 0 1 0 */
