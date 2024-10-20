#include<bits/stdc++.h>
using namespace std;
long long n,m,q,a[1005][1005],f[1005][1005],x11,y11,x2,y2;
int main()
{
	cin>>n>>m>>q;
	for(long long i=1;i<=n;i++)
	{
		for(long long j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(long long i=1;i<=n;i++)
	{
		for(long long j=1;j<=m;j++)
		{
			f[i][j]=f[i-1][j]+f[i][j-1]-f[i-1][j-1]+a[i][j];
		}
	}
	for(long long i=1;i<=q;i++)
	{
		cin>>x11>>y11>>x2>>y2;
		cout<<f[x2][y2]-f[x11-1][y2]-f[x2][y11-1]+f[x11-1][y11-1]<<endl;
	}
	return 0;
}
