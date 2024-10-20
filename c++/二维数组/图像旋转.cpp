#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=0,m=0,a[300][300];
	memset(a,0,sizeof(a));
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}	
	}
	for(int j=1;j<=m;j++)
	{
		for(int i=n;i>=1;i--)
		{
			cout<<a[i][j]<<" ";
		}	
		cout<<endl<<endl;
	}
	return 0;
}
