#include<bits/stdc++.h>
using namespace std;
int a[1000],ans[1000],bz[1000][1000],maxx=-1,n,k;
void dfs(int s,int x)
{
	if(x==n+1)
	{
		if(s>maxx)
		{
			maxx=s;
			for(int i=1;i<=n;i++)
			{
				ans[i]=a[i];
			}
		}
		return;
	}
	int d=0;
	for(int i=1;i<=k;i++)
	{
		if(bz[x][i]==1&&a[i]==1)
		{
			d=0;
			break;
		}
		else
		{
			d=1;
		}
	}
	if(d==1)
	{
		a[x]=1;
		dfs(s+1,x+1);
		a[x]=0;
	}
	dfs(s,x+1);
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=k;i++)
	{
		int m,f;
		cin>>m>>f;
		bz[m][f]=1;
		bz[f][m]=1;
	}
	dfs(0,1);
	cout<<maxx<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<ans[i]<<' ';
	}
	return 0;
}
