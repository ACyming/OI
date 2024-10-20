#include<bits/stdc++.h>
using namespace std;
long long a[10000],bz[10000],n,s,d=0;
void dfs(long long sum)
{
	if(sum>s)
	{
		return;
	}
	if(sum==s)
	{
		for(long long i=1;i<=n;i++)
		{
			if(bz[i]==1)
			{
				cout<<"number:"<<i<<"  weight:"<<a[i]<<endl;
			}
		}
		d=1;
	}
	for(long long i=n;i>=1;i--)
	{
		if(bz[i]==0)
		{
			bz[i]=1;
			dfs(sum+a[i]);
			if(d==1)
			{
				return;
			}
			bz[i]=0;
		}
	}
	return;
}
int main()
{
	cin>>n>>s;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	dfs(0);
	if(d==0)
	{
		cout<<"not found";
	}
	return 0;
}
