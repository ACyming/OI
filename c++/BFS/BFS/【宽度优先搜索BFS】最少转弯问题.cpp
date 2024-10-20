#include<cstdio>
using namespace std;
int n,a[1100][1100],dx[4]={-1,0,1,0},dy[4]={0,1,0,-1},m,x1,x2,y1,y2,mi=9999999;
void f(int x,int y,int s,int ff)
{
	if(x==x2&&y==y2)
	{
		mi=s;
		return;
	}
	if(s>=mi)
	{
		return;
	}
	for(int i=0;i<4;i++)
	{
		int xx=x+dx[i];
		int yy=y+dy[i]; 
		if(xx>0&&xx<=n&&yy>0&&yy<=m&&a[xx][yy]==0)
		{
			if(ff!=i)
			{
				s++;
			}
			a[x][y]=1;
			f(xx,yy,s,i);
			a[x][y]=0;
		}
	}
}
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	f(x1,y1,0,4);
	printf("%d",mi-1);
	return 0;
}
