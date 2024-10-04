#include<bits/stdc++.h>
using namespace std;
int n,a,b;
int s[500010];
int syf(int xx)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		if(s[i]>xx*a)
		{
			sum+=ceil((s[i]-xx*a)*1.0/b);	
	    }
	}
	if(sum>xx) 
	{
		return 0;
	}
    return 1;
}
int main()
{
	scanf("%d%d%d",&n,&a,&b);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&s[i]);
	}
	sort(s+1,s+1+n);
 	int l=1;
	int r=s[n];
	int day,ans=0;
	while(l<=r)
	{
		day=(l+r)>>1; 
		if(syf(day)) 
		{
			r=day-1;ans=day;
		}
		else
		{
			l=day+1;
		}
	}
	printf("%d\n",ans);
	return 0;
}
