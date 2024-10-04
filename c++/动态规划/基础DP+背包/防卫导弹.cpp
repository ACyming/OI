#include<bits/stdc++.h>
using namespace std;
long long n,a[10000],dp[10000],maxx=-1000;
int main()
{
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
		dp[i]=1; 
	}
	for(long long i=n;i>=1;i--)
	{
		for(long long j=i+1;j<=n;j++)
		{
			if(a[i]>=a[j])
			{
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
	}
	for(long long i=1;i<=n;i++)
	{
		maxx=max(maxx,dp[i]);
	}
	cout<<maxx<<endl;
	for(long long i=1;i<=n;i++)
	{
		if(dp[i]==maxx)
		{
			cout<<i<<endl;
			maxx--;
		}
		if(maxx==0)	break;
	}
	return 0;
}
