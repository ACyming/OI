#include<bits/stdc++.h>
using namespace std;
int o[99999],v[99999],g[99999],f[1001][1001];
int main()
{
	int n,x,y;
	cin>>n>>x>>y;
	memset(f,127,sizeof(f));
	for(int i=1;i<=n;i++)
	{
		cin>>o[i]>>v[i]>>g[i]; 
	}
	f[0][0]=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=x;j>=0;j--)
		{
			for(int k=y;k>=0;k--)
			{
				f[j][k]=min(f[j][k],f[max(0,j-o[i])][max(0,k-v[i])]+g[i]);
			}
		}
	}
	cout<<f[x][y];
	return 0;
} 
