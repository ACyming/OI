#include<bits/stdc++.h>
using namespace std;
int n,m,a[1100],b[1100],c[1100],num=1,ans[1100];
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=m;i++)
	{
		cin>>b[i];
	}
	for(int i=1;i<=n;i++)
	{
		c[i]=a[i];
	}
	for(int i=n+1;i<=m+n;i++)
	{
		c[i]=b[num];
		num++;
	}
	num=1; 
	sort(c+1,c+1+n+m);
	for(int i=2;i<=n+m;i++)
	{
		if(c[i]==c[i-1])
		{
			ans[num]=c[i-1];
			c[i-1]=0;
			num++;
		}
	}
	for(int i=1;i<=n+m;i++)
	{
		if(c[i]!=0)
		{
			cout<<c[i]<<" ";
		}
	}
	cout<<endl;
	for(int i=1;i<=num;i++)
	{
		if(ans[i]!=0)
		cout<<ans[i]<<" ";
	}
	return 0;
} 
