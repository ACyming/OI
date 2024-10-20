#include<bits/stdc++.h>
using namespace std;
long long a[1000][1000],f[1000][1000],bz[1000][1000][3],n,maxx=-1;
void hs(long long x,long long y)
{
	if(bz[x][y][1]==0)
	{
		return; 
	}
	hs(bz[x][y][1],bz[x][y][2]);
	maxx=max(maxx,f[bz[x][y][1]][bz[x][y][2]]);
}
int main()
{
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		for(long long j=1;j<=i;j++)
		{
			cin>>a[i][j];
			f[i][j]=a[i][j];
		}
	}
	for(long long i=n-1;i>=1;i--)
	{
		for(long long j=1;j<=i;j++)
		{
			if(a[i+1][j]>a[i+1][j+1])
			{
				a[i][j]+=a[i+1][j];
				bz[i][j][1]=i+1;
				bz[i][j][2]=j;
			}
			else
			{
				a[i][j]+=a[i+1][j+1];
				bz[i][j][1]=i+1;
				bz[i][j][2]=j+1;
			}
		}
	}
	hs(1,1);
	cout<<a[1][1]+max(f[1][1],maxx);
	return 0;
}
