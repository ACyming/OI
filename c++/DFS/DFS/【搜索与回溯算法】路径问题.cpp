#include<bits/stdc++.h>
using namespace std;
long long a[3]={0,1,2},bz[10000],ans[10000],cnt,n;
void dfs(long long sum)
{
	if(sum>n)
	{
		return;
	}
	if(sum==n)
	{
		cnt++;
		cout<<cnt<<" ";
		for(long long i=1;i<=n;i++)
		{
			if(bz[i]==1)
			{
				cout<<i<<">";
			}
		}
		cout<<endl;
	}
	for(long long i=1;i<=n;i++)
	{
		if(bz[i+a[i]]==0)
		{
			bz[i+a[i]]=1;
			ans[i+a[i]]=i;
			dfs(sum+a[i]);
			bz[i+a[i]]=0;
			ans[i+a[i]]=0;
		}
	}
}
int main()
{
	cin>>n;
	dfs(1);
	return 0;
}
