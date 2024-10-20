#include<bits/stdc++.h>
using namespace std;
long long n,d,k,bz[18],a[1005][1005],maxx=-1;
void dfs(long long x,long long g)
{
	if(x==k+1)
	{
		long long cnt=0;
		for(long long i=1;i<=n;i++)
		{
			bool pd=0;
			for(long long j=1;j<=a[i][0];j++)
			{
				 if(bz[a[i][j]]==0)
				 {
				 	pd=1;
				 	break;
				 }
			}
			if(pd==0)
			{
				cnt++;
			}
		}
		
		maxx=max(maxx,cnt);
		return;
	}
	for(long long i=g;i<=d;i++)
	{
		if(bz[i]==0)
		{
			bz[i]=1;
			dfs(x+1,i+1);
			bz[i]=0;
		}
	}
}
int main()
{
	cin>>n>>d>>k;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i][0];
		for(long long j=1;j<=a[i][0];j++)
		{
			 cin>>a[i][j];
		}
	}
	dfs(1,1);
	cout<<maxx;
	return 0;
}
