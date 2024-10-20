#include<bits/stdc++.h>
using namespace std;
long long n,x[50005],y[50005],a[50005],b[50005],bz[50005],j=1,d[500005],ans=INT_MIN;
int main()
{
	cin>>n;
	for(long long i=1; i<=n; i++)	cin>>x[i]>>y[i];
	for(long long i=1; i<=n; i++)
	{
		if(a[i-1]==j)	cout<<-1,exit(0);a[i]=j;
		if(bz[y[j]]==0)			bz[y[j]]=1,j=y[j];
		else if(bz[x[j]]==0)	bz[x[j]]=1,j=x[j];
	}
	memset(bz,0,sizeof(bz)),j=1;
	for(long long i=1; i<=n; i++)
	{
		if(b[i-1]==j)	cout<<-1,exit(0);b[i]=j;
		if(bz[x[j]]==0)			bz[x[j]]=1,j=x[j];
		else if(bz[y[j]]==0)	bz[y[j]]=1,j=y[j];
	}
	for(long long i=1; i<=n; i++)	d[(i-a[i]+n)%n]++;
	for(long long i=0;i<=n-1;i++)	ans=max(ans,d[i]),d[i]=0;d[n]=0;
	for(long long i=1; i<=n; i++)	d[(a[i]-i+n)%n]++;
	for(long long i=0;i<=n-1;i++)	ans=max(ans,d[i]),d[i]=0;d[n]=0;
	for(long long i=1; i<=n; i++)	d[(i-b[i]+n)%n]++;
	for(long long i=0;i<=n-1;i++)	ans=max(ans,d[i]),d[i]=0;d[n]=0;
	for(long long i=1; i<=n; i++)	d[(b[i]-i+n)%n]++;
	for(long long i=0;i<=n-1;i++)	ans=max(ans,d[i]),d[i]=0;d[n]=0;
	cout<<n-ans;
	return 0;
}