#include<bits/stdc++.h> 
int n,a[30][30],x,y,k,t;
int main()
{
	scanf("%d",&n);
	for(int k=1;k<=(n+1)/2;k++)//���ֱ仯 
	{
		for(int i=k;i<=n+1-k;i++)//�� 
		{
			for(int j=k;j<=n+1-k;j++)// �� 
			{
				a[i][j]=k;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	} 
}
