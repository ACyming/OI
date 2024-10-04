#include<bits/stdc++.h> 
int n,a[30][30],x,y,k,t;
int main()
{
	scanf("%d",&n);
	k=1;t=1;
	x=1,y=1;
	memset(a,-1,sizeof(a));
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			a[i][j]=0;
			}
		}
	a[x][y]=k;
	while(k<=n*n)
	{
		if(t==1)
		{
			if(a[x-1][y+1]==0)
			{
				x--;
				y++;
				k++;
				a[x][y]=k;
				continue;
			}
			if(a[x-1][y+1]==-1)
			{
				y++;
				t=2;
				if(a[x][y]==0)
				{
					k++;
					a[x][y]=k;
					}
				}
			}
		if(t==2)
		{
			if(a[x+1][y-1]==0)
			{
				x++;
				y--;
				k++;
				a[x][y]=k;
				continue;
				}
			if(a[x+1][y-1]==-1)
			{
				x++;
				t=1;
				if(a[x][y]==0)
				{
					k++;
					a[x][y]=k;
					}
				}
			}
		}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
		printf("%5d",a[i][j]);
			}
		printf("\n");
		}
	return 0;
}  
