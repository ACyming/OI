#include<bits/stdc++.h>
int m,n,c[100005],d[100005],dp[10005];
using namespace std;
int main()
{
	cin>>m>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>c[i]>>d[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=m;j>=c[i];j--)
		{
			dp[j]=max(dp[j],dp[j-c[i]]+d[i]);
		}
	}
	cout<<dp[m];
}
