#include<iostream>
using namespace std;
int num;
int n;
int map[20][20];
int ans;
int dx[8]={-1,1,0,0,-1,-1,1,1};
int dy[8]={0,0,-1,1,-1,1,-1,1};
void mps(int x,int y)
{
	
	if(x==1&&y==n)
	{
		ans++;
		return;
	}
	else
	{
		for(int i=0;i<8;i++)
		{
			int nx=x+dx[i];
			int ny=y+dy[i];
			if(nx>=1&&nx<=n&&ny>=1&&ny<=n&&map[nx][ny]==0)
			{	
				map[x][y]=1;
				mps(nx,ny);
				map[nx][ny]=0;
			}
			/*        行       列 
			  上      x-1      y 
			  下      x+1      y 
			  左      x        y-1 
			  右      x        y+1 
			  左上    x-1      y-1 
			  左下    x+1      y-1 
			  右上    x-1      y+1 
			  右下    x+1      y+1*/ 
		}
	}
}
int main()
{
	int xxx,yyy;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>map[i][j];
		}
	} 
	mps(1,1); 
	printf("%d",ans);
	return 0;
}
