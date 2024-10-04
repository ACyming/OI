#include<bits/stdc++.h>
using namespace std;
long long n,bz[100],a[100];
bool hs(long long p)
{
	for(long long i=2;i*i<=p;i++)
	{
		if(p%i==0)	return 0;
	}
	return 1;
}
void dfs(long long x)
{
	if(x==n+1&&hs(a[1]+a[x-1]))
	{
		for(long long i=1;i<=n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for(long long i=2;i<=n;i++)
	{
		if(bz[i]==0&&hs(i+a[x-1]))
		{
			bz[i]=1;
			a[x]=i;
			dfs(x+1);
			bz[i]=0;
		}
	}
}
int main()
{
	cin>>n;
	a[1]=1;
	bz[1]=1;
	dfs(2);
	return 0;
}
