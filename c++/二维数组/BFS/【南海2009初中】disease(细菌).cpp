#include<bits/stdc++.h>
using namespace std;
int n,d,k,m,a[1001],dp[1001][16];
bool bz[17];
void dfs(int x,int l)
{
	if(x==k+1)
	{
		int niucnt=0;
		for(int i=1;i<=n;i++)
		{
			int bdcnt=0;
			for(int j=1;j<=a[i];j++) if(bz[dp[i][j]]==true) bdcnt++;
			if(bdcnt==a[i]) niucnt++;
		}
		m=max(m,niucnt);
	}
	for(int i=l;i<=d;i++)
	{
		bz[i]=true;
		dfs(x+1,i+1);
		bz[i]=false;
	}
}
int main()
{
	cin>>n>>d>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		for(int j=1;j<=a[i];j++) cin>>dp[i][j];
	}
	dfs(1,1);
	cout<<m;
}
