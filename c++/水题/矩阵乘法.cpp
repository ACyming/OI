#include<bits/stdc++.h> 
#include<windows.h>
int n,m,k,b[100][100],a[100][100],ans[100][100];
int main()
{	

	scanf("%d %d %d",&n,&m,&k);
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=m;++j)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<=m;++i)
	{
		for(int j=1;j<=k;++j)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=k;++j)
		{
			for(int l=1;l<=m;++l)
			{
				ans[i][j]+=a[i][l]*b[l][j];
			}
		}	
	} 
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=k;++j)
		{
			printf("%d ",ans[i][j]);
		}
		printf("\n");
	} 
}
