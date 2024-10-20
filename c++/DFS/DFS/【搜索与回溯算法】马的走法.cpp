#include<cstdio>
#include<cmath>
using namespace std;
int n,m,map[15][15],ans,mar;
int dx[8]={2,2,1,1,-2,-2,-1,-1};
int dy[8]={1,-1,2,-2,1,-1,2,-2};
void dfs(int x,int y)
{
	if(x==n&&y==m&&mar>0)
	{
		ans++;
		return;
	}
	mar++;
	for(int i=0;i<8;i++)
	{
		int xx=x+dx[i];
		int yy=y+dy[i];
		if(map[xx][yy]==0&&xx<=5&&xx>=1&&yy<=5&&yy>=1)
		{
			map[xx][yy]=1;
			dfs(xx,yy);
			map[xx][yy]=0;
		}
	}
}
int main()
{
	scanf("%d%d",&n,&m);
	dfs(n,m);
	printf("%d",ans);
	return 0;
}
