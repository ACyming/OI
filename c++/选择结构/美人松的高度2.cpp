#include<bits/stdc++.h>
using namespace std;
int  a[10000001],n,m,k,x; 
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
	scanf("%d",&k);
	a[k]=a[k]+1;
	}
	for(int i=1;i<=m;i++)
	{
		scanf("%d",&x);
		printf("%d ",a[x]);
	}
	return 0;
 } 

