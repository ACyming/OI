#include<bits/stdc++.h>
using namespace std;
long long f[100000],a[10000],n,cnt;
void dfs(long long x)
{
	if(x==n+1)
	{
		cnt++;
		return;
	}
	for(long long i=1;i<=2;i++)
	{
		if(i==1&&a[x-1]==1)	continue;
		if(f[i]>0)
		{
			f[i]--;
			a[x]=i;
			dfs(x+1);
			f[i]++;
		}
	}
}
int main()
{
	cin>>f[1]>>f[2];
	n=f[1]+f[2];
	dfs(1);
	cout<<cnt;
	return 0;
}
