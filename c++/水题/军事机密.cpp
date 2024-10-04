#include<bits/stdc++.h>
using namespace std;
int n=0,k=0,t[30001],a[30001];
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a+1,a+1+n);
	scanf("%d",&k);
	for(int i=1;i<=k;i++)
	{
		scanf("%d",&t[i]);
	}
	for(int i=1;i<=k;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(t[i]==j)
			{
				printf("%d\n",a[j]);
			}
		}
	}
	return 0;
 } 
 
