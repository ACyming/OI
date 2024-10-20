#include<bits/stdc++.h>
using namespace std;
int a[9999],b[9999]; 
void hsort(int low,int mid,int h)
{
	int i=low,j=mid+1,k=low;
	while(i<=mid&&j<=h)
	{
		if(a[i]<a[j])
		{
			b[k++]=a[i++];
		}
		else
		{
			b[k++]=a[j++];
		}
	}
	while(i<=mid) b[k++]=a[i++];
	while(j<=h) b[k++]=a[j++];
	for(int l=low;l<=h;l++)
	{
		a[l]=b[l];
	}
}
void msort(int l,int r)
{
	if(l>=r) return ;
	int mid=(l+r)>>1;
	msort(l,mid);
	msort(mid+1,r);
	hsort(l,mid,r);
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	msort(1,n);
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
