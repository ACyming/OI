#include<bits/stdc++.h>
using namespace std;
long long n,dp[5005],maxx;
struct gg{long long south,north;}a[5005];
bool cmp(gg x,gg y)
{
	return x.south<y.south;
}
int main()
{
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		dp[i]=1;
		cin>>a[i].south>>a[i].north;
	}
	sort(a+1,a+n+1,cmp);
	for(long long i=1;i<=n;i++)
	{
		for(long long j=1;j<i;j++)
		{
			if(a[i].north>=a[j].north)
			{
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
		maxx=max(maxx,dp[i]);
	}
	cout<<maxx;
	return 0;
}
