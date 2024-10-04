#include<bits/stdc++.h>
using namespace std;
double sum=0,m,n,ans=0,w[10001],v[10001];
int cnt,z,mar,vis[10001],b[10001];
void dfs(int x,int y)
{
	if(w[x]>n)
	{
		z++;
		if(z==n)
		{
			mar=1;
		}
	}
	if(x>m)
	{
		sum=0;
		for(int i=1;i<=m;i++)
		{
			if(vis[i]==1)
			{
				sum=sum+v[i];
			}
		}
		if(sum>ans)
		{
			ans=sum;
			for(int i=1;i<=m;i++)
			{
				b[i]=vis[i];
			}
		}
		return;
	}
	if(w[x]+y<=n)
	{
		vis[x]=1;
		dfs(x+1,y+w[x]);
		vis[x]=0;
	}
	dfs(x+1,y);
}
int main()
{
	scanf("%lf%lf",&n,&m);
	for(int i=1;i<=m;i++)
	{
		scanf("%lf%lf",&w[i],&v[i]);
	}
	dfs(1,0);
	cnt=ans;
	if(mar==0)
	{
		printf("%d\n",cnt);
	}
	for(int i=1;i<=m;i++)
	{
		if(b[i]==1)
		{
			printf("%d ",i);
		}
	}
}
