#include<bits/stdc++.h>
using namespace std;
int a[99999999],b[99999999],num,maxn,maxx,n,k;
void quchong()
{
	for(int i=1;i<=n;i++)
	{
		if(a[i+1]==a[i])
		{
			a[i]=0;
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		maxx=max(maxx,a[i]);
	}
	sort(a,a+n);
	quchong(); 
	sort(a,a+n);
	for(int i=1;i<=n;i++)
	{
		if(a[i]==0)
		{
			k++;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i+k]==i)
		{
			num++;
		}
		else
		{
			maxn=max(maxn,num);
			num=0;
		}

	}
	cout<<maxn;
}
//012340


