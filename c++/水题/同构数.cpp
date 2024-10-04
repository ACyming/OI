#include<bits/stdc++.h>
using namespace std;
int n,num;
int sz,sz2,sw; 
int zc,zc2;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		num=i*i;
		zc=i;
		zc2=num;
		while(zc!=0)
		{
			sz*=10; 
			sz+=zc%10;
			zc%=10;
			sw++;
		}
		for(int i=1;i<=sw;i++)
		{
			sz2*=10;
			sz2+=zc2%10;
			zc/=10; 
		}
		if(sz2==sz)
		{
			cout<<i;
		}
		
	}
	return 0;
}
