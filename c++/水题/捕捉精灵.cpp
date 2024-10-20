//²¶×½¾«Áé
#include<bits/stdc++.h>
using namespace std;
int vis[10001],minn=999999,minx=999999,a[10001],n;
void dfs(int x,int y)
{
	if(minn>x)
	{
		minn=x;
		minx=y;
	}
	if(minn==x)
	{
		if(minx>y)
		{
			minx=y;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(x-a[i]>0&&vis[y-1]<=i)
		{
			vis[y]=i;
			dfs(x-a[i],y+1);
		}
	}
}
int main()
{
	int p;
	cin>>p>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	dfs(p,0);
	cout<<minn<<endl<<minx;
	return 0;
}
