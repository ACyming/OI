#include<bits/stdc++.h>
using namespace std;
long long n,s,f[60][1010][110],c[210],len=200;
void jia(long long x,long long y,long long z)
{
	for(long long i=1;i<=100;i++)
	{
		f[x][y][i]+=f[x-1][y-z][i];
	  	f[x][y][i+1]+=f[x][y][i]/10;
	  	f[x][y][i]%=10;
	}
}
int main()
{
	cin>>n>>s;
	s/=2;
	for(long long i=0;i<=9;i++)
	{
		f[1][i][1]=1;
	}
	for(long long i=1;i<=n;i++)
	{
		for(int j=0;j<=min(s,i*9);j++)
		{
			for(long long k=0;k<=min(j,9);k++)
			{
				jia(i,j,k);
			}
		}
	}
	for(long long i=1;i<=100;i++)
	{
		for (long long j=1;j<=100;j++)
	    {
	    	c[i+j-1]+=f[n][s][i]*f[n][s][j];
	    	c[i+j]+=c[i+j-1]/10;
	    	c[i+j-1]%=10;
		}
	}
	while(c[len]==0&&len>1)
	{
		len--;
	}
	for(long long i=len;i>=1;i--)
	{
		cout<<c[i];
	}
	return 0;
}
