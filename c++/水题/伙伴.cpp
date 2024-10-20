#include<bits/stdc++.h>
using namespace std;
int t,sum,a[999999],b[999999],ans=0,maxx=0,num,maxa,maxb,a1[99999],b1[99999];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		maxa=max(maxa,a[i]);
		a1[a[i]]++;
	}
	for(int i=1;i<=m;i++)
	{
		cin>>b[i];
		maxb=max(maxb,b[i]);
		b1[b[i]]++;
	}
	for(int i=1;i<=maxa;i++)
	{
		if(a1[i]>0) 
		for(int j=1;j<=maxb;j++)
		{	
			sum+=a1[i]*b1[j]*b1[i+j]*(i+j);
		}
	}
	
	cout<<sum;
	return 0;
}
