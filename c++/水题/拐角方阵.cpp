#include<bits/stdc++.h> 
int n,a[30][30],x,y,k,t;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j<i){
				a[i][j]=j;
			}
			else
			{
				a[i][j]=i;
			}
			printf("%5d",a[i][j]);
		}
		printf("\n");
	} 
}
