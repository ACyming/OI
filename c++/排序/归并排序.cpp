#include<bits/stdc++.h>
using namespace std;
long long n,a[10000],b[10000];
void hsort(long long z,long long y,long long m)
{
	long long k=z,left=z,right=m+1;
	while(left<=m&&right<=y)
	{
		if(a[left]>a[right])	b[k++]=a[right++];
		else	b[k++]=a[left++];
	}
	while(left<=m)	b[k++]=a[left++];
	while(right<=y)	b[k++]=a[right++];
	for(long long i=z;i<=y;i++)
	{
		a[i]=b[i];
	}
}
void msort(long long l,long long r)
{
	if(l>=r)	return;
	long long mid=(l+r)>>1;
	msort(l,mid);
	msort(mid+1,r);
	hsort(l,r,mid);
}
int main()
{
	cin>>n;
	for(long long i=1;i<=n;i++)	cin>>a[i];
	msort(1,n);
	for(long long i=1;i<=n;i++)	cout<<a[i]<<" ";
	return 0;
}
