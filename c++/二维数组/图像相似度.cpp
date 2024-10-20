#include<bits/stdc++.h>
using namespace std;
int n,m;
int mp[101][101],mp2[101][101];
int main()
{
	
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>mp[i][j];
		} 
	} 
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>mp2[i][j];
		} 
	} 
	int tb=0;
	double ans=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(mp[i][j]!=mp2[i][j])
			{
				tb++;
			}
		} 
	} 
	ans=tb/(n*m);
	printf("%.2lf%%",ans);
	return 0;
}
